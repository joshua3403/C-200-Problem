#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int number1 = 100;
	int number2 = 200;
	int number3 = 200;

	if (number1 > number2 && number1 > number3)
		cout << "���� ū�� number1 : " << number1 << endl;
	else if (number2 > number1 && number2 > number3)
		cout << "���� ū�� number2 : " << number2 << endl;
	else if (number3 > number1 && number3 > number2)
		cout << "���� ū�� number3 : " << number3 << endl;
	else
		cout << "ã�� �� �����ϴ�." << endl;
 
	return 0;
}


