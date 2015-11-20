//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include <string>
#include "Number24Calculator.h"

using namespace Number24;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

using namespace std;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

MainPage::MainPage()
{
	InitializeComponent();
}

/// <summary>
/// Invoked when this page is about to be displayed in a Frame.
/// </summary>
/// <param name="e">Event data that describes how this page was reached.  The Parameter
/// property is typically used to configure the page.</param>
void MainPage::OnNavigatedTo(NavigationEventArgs^ e)
{
	(void) e;	// Unused parameter

	// TODO: Prepare page for display here.

	// TODO: If your application contains multiple pages, ensure that you are
	// handling the hardware Back button by registering for the
	// Windows::Phone::UI::Input::HardwareButtons.BackPressed event.
	// If you are using the NavigationHelper provided by some templates,
	// this event is handled for you.
}


void Number24::MainPage::btnCalculate_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	String^ str1;
	String^ str2;
	String^ str3;
	String^ str4;


	str1 = this->txtNumber1->Text;
	str2 = this->txtNumber2->Text;
	str3 = this->txtNumber3->Text;
	str4 = this->txtNumber4->Text;

	wstring cppstr1(str1->Data());
	wstring cppstr2(str2->Data());
	wstring cppstr3(str3->Data());
	wstring cppstr4(str4->Data());

	try {
		int number1, number2, number3, number4;
		number1 = stoi(cppstr1);
		number2 = stoi(cppstr2);
		number3 = stoi(cppstr3);
		number4 = stoi(cppstr4);
		int number[4];
		number[0] = number1;
		number[1] = number2;
		number[2] = number3;
		number[3] = number4;

		string result = Number24Calculator::calculate(number);

		wstring cppstr5(result.begin(), result.end());

		if (cppstr5 == L"") {
			cppstr5 = cppstr5 + L"无解";
		}
		else {
			cppstr5 = cppstr5 + L"=24";
		}

		this->txtblockResult->Text = ref new String(cppstr5.c_str());
	}
	catch (...) {
		this->txtblockResult->Text = "出错";
	}
}
