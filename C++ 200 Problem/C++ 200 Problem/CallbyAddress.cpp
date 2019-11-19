#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void Func1(bool *is_on)
{
	cout << "Call by address : " << sizeof(is_on) << endl;
}

void Func2(bool &is_on)
{
	cout << "Call by reference : " << sizeof(is_on) << endl;
}

int main()
{
	bool is_tmp = true;

	Func1(&is_tmp);
	Func2(is_tmp);

	return 0;
}

// Call by address는 주소를 명시적으로 전달받아 4바이트가 할당된다.
// Func2에서는 인자로 주소를 받는데, 이 경우 함수 호출하는 곳에서는 값을 그대로 넘기지만 받는 측에서 포인터로 받는다.