#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1("10");
	string str2("2.456");
	string str3("456 문자열");

	int num1 = stoi(str1);
	int num2 = stoi(str2);
	int num3 = stoi(str3);

	cout << num1 << ", " << num2 << ", " << num3 << endl;

	return 0;
}

// 실수형으로 만들어진 문자열을 정수로 반환하면, 소수점 이하는 버려진 채, 정수로 변환된다.
// 문자열과 숫자가 섞여있다면 문자열을 제거된 채 정수로 변환된다.