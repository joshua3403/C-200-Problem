#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int GetOne()
{
	return 1;
}

int Plus(int x, int y = GetOne(), int z = 1)
{
	return x + y + z;
}

int main()
{
	int number1 = Plus(1);
	int number2 = Plus(1, 2);
	int number3 = Plus(1, 2, 3 );

	cout << "결과값 : " << number1 << ", " << number2 << ", " << number3 << endl;

	return 0;
}

// 변수를 함수 내부에서 선언할 때 초기값을 주어 초기화할 수 있다.
// C++를 비롯한 많은 언어에서는 함수의 인자도 초기화할 수 있도록 지원하고 있는데,
// 이렇게 초기화된 인자를 디폴트 매개변수라고 한다.
// 초기화된 매개변수는 인자가 생략될 경우 초기화된 값을 그대로 사용하며 만약 인자가 넘어온다면 초기값은 무시된다.