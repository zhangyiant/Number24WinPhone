﻿

//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"
#include "MainPage.xaml.h"




void ::Number24::MainPage::InitializeComponent()
{
    if (_contentLoaded)
        return;

    _contentLoaded = true;

    // Call LoadComponent on ms-appx:///MainPage.xaml
    ::Windows::UI::Xaml::Application::LoadComponent(this, ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml"), ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);

    // Get the TextBox named 'txtNumber1'
    txtNumber1 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"txtNumber1"));
    // Get the TextBox named 'txtNumber2'
    txtNumber2 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"txtNumber2"));
    // Get the TextBox named 'txtNumber3'
    txtNumber3 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"txtNumber3"));
    // Get the TextBox named 'txtNumber4'
    txtNumber4 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"txtNumber4"));
    // Get the TextBlock named 'txtblockResult'
    txtblockResult = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"txtblockResult"));
}

void ::Number24::MainPage::Connect(int connectionId, Platform::Object^ target)
{
    (void)connectionId; // Unused parameter
    (void)target; // Unused parameter
    _contentLoaded = true;
}

