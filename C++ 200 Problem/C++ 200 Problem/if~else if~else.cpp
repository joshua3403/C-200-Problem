#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int number1 = 100;
	int number2 = 6;

	if (number1 < number2)
		cout << "number2가 더 큽니다." << endl;
	else if (number1 > number2)
		cout << "number1이 더 큽니다." << endl;
	else
		cout << "number1과 number2가 같습니다." << endl;

	if (number2 < 7)
	{
		if (number2 > 3)
		{
			if (number2 == 4)
				cout << "number2는 4입니다." << endl;
			else if (number2 == 5)
				cout << "number2는 5입니다." << endl;
			else
				cout << "number2는 6입니다." << endl;
		}
		else
		{
			if (number2 == 3)
				cout << "number2는 3입니다." << endl;
			else if (number2 == 2)
				cout << "number2는 2입니다." << endl;
			else
				cout << "number2는 1입니다." << endl;
		}
	}

 	return 0;
}

// else if를 한 번 사용하는 것은 괜찮지만 2번, 3번 사용하는 것은 지양해야 한다.
// 조건문을 일일이 비교하다 보면 PC(Program Couner)가 증가하여 프로그램 성능에 좋지 않고, 가독성이 떨어지기 때문이다.