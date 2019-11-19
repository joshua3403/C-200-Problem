#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void Func1(int &arg)
{
	cout << "변경 전 : " << arg << endl;
	arg += 10;
	cout << "변경 후 : " << arg << endl;
}

void Func2(string &info)
{
	info += "981년";
}

int main()
{
	int year(10);

	Func1(year);

	cout << "Func1함수 종료 후 : " << year << endl;

	string king_info = "고려 성종 즉위년 : ";
	
	Func2(king_info);

	cout << king_info << endl;

	return 0;
}

// Call by Reference는 인자의 주소를 가리키는 포인터를 사용하기 때문에 year 변수값은 증가한다. 포인터가 가리키는 곳, 즉 주소의 값을 직접 바꾸는 것이다.