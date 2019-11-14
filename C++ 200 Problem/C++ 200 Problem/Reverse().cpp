#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str1 = "gasdfasef";

	reverse(str1.begin(), str1.end());

	cout << str1 << endl;

	return 0;
}

// 문자열의 첫 위치와 마지막 위치를 인자로 전달한다.
// 첫 위치에서 마지막 위치까지 모두 뒤집는다는 의미이다.
