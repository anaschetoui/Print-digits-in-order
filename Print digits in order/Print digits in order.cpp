#include <iostream>
using namespace std;

int ReadPostiveNumber(string Message)
{
	int Number;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void DigitInOrder(int N)
{
	int Reminder = 0;
	int N2 = 0;
	int Reminder2 = 0;
	while (N > 0)
	{
		Reminder = N % 10;
		N = N / 10;
		N2 = (N2 * 10) + Reminder;

	};
	

	while (N2 > 0)
	{
		Reminder2 = N2 % 10;
		N2 = N2 / 10;
		cout << Reminder2 << endl;
	};
	
}

int main()
{
	DigitInOrder(ReadPostiveNumber("Please enter a positive number: "));

	return 0;
}