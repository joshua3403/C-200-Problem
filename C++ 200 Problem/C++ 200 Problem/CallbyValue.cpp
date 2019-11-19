#include "pch.h"
#include <iostream>

using namespace std;

void Func(int arg)
{
	cout << "변경 전 : " << arg << endl;
	arg += 10;
	cout << "변경 후 : " << arg << endl;
}


int main()
{
	int year(10);

	Func(year);

	cout << "함수 종료 후 : " << year << endl;

	return 0;
}

// Call by Value는 인자로 넘어온 값을 내부적으로 복사해 사용한다. 그러므로 year 변수는 Func 함수 내부에 복사된 값과 같지 않다.