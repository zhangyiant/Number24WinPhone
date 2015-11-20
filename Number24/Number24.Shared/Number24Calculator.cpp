#include "pch.h"
#include "Number24Calculator.h"
#include <string>

using namespace std;

string Number24::Number24Calculator::calculate(int number[])
{
	string result;
	result = process(number);
	return result;
}

string Number24::Number24Calculator::process(int a[])
{
	string ResultString;
	int Counter;
	int Used[4];
	for (Counter = 0; Counter<4; Counter++)
		Used[Counter] = 0;
	if (compute(a, Used, 1, 24.0, ResultString)) {
		return ResultString;
	}
	else {
		return string("");
	}
}

bool Number24::Number24Calculator::compute(int a[], int Used[], int Level, double Answer, string& ResultString )
{
	int Counter;
	string TempString;
	if (Level == 4)
	{
		for (Counter = 0; Counter<4; Counter++)
		{
			if ((!Used[Counter]) && (a[Counter] == Answer))
			{
				TempString = "((" + to_string(a[Counter]);
				ResultString += TempString;
				return true;
			}
		}
		return false;
	}
	for (Counter = 0; Counter < 4; Counter++)
	{
		if (!Used[Counter])
		{
			Used[Counter] = 1;
			if (compute(a, Used, Level + 1, Answer - a[Counter], ResultString))
			{
				TempString = "+" + to_string(a[Counter]) + ")";
				ResultString += TempString;
				return true;
			}
			if (compute(a, Used, Level + 1, Answer + a[Counter], ResultString))
			{
				TempString = "-" + to_string(a[Counter]) + ")";
				ResultString += TempString;
				return true;
			}
			if (compute(a, Used, Level + 1, Answer*a[Counter], ResultString))
			{
				TempString = "/" + to_string(a[Counter]) + ")";
				ResultString += TempString;
				return true;
			}
			if (compute(a, Used, Level + 1, Answer / a[Counter] * 1.0, ResultString))
			{
				TempString = "*" + to_string(a[Counter]) + ")";
				ResultString += TempString;
				return true;
			}
			Used[Counter] = false;
		}
	}
	return false;
}
