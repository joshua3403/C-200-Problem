#include "pch.h"
#include <string>
#include <iostream>
#include <tuple>

using namespace std;

int main()
{
	typedef tuple<string, int, double> Data;

	Data data1("문자열", 10, 1.2);

	string my_str = "";
	int my_int = 0;
	tie(my_str, my_int, ignore) = data1;

	cout << my_str << ", " << my_int << endl;

	return 0;
}

// tie 함수를 선언하며 my_str, my_int, ignore를 인자로 전달한다. 
// my_str엔 튜플의 첫 번째 데이터인 "문자열"이 저장되고, my_int에는 두 번째 인자인 int 10이 저장된다.
// ignore는 값을 가져오지 않을 때 입력한다.