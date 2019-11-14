#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string king = "조선 세종";
	string favorite1("고기");
	string favorite2("야근");

	string king_info("");

	king_info += king;
	king_info += "은 ";
	king_info += favorite1;
	king_info.append("와 ");
	king_info.append(favorite2);
	king_info.append("을 좋아했습니다.");

	cout << king_info << endl;

	return 0;
}

// string + 연산자를 이용하면 string, char, const char *도 쉽게 추가할 수 있다. string은 내부 버퍼를 가지고 있으므로 가변 길이 문자열 처리가 가능하다.
// 또한, append, insert, push_back 함수로도 문자 또는 문자열을 추가할 수 있다.