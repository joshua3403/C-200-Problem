#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	string seven_war = "청일전쟁";
	string korea_war = "한국전쟁";

	if (seven_war.compare(korea_war) != 0)
		cout << "다른 문자열입니다." << endl;
	else
		cout << "같은 문자열입니다." << endl;

	return 0;
}

// 비교할 문자열에 compare() 함수를 호출하고 인자로 다른 문자열을 넘기는데, 이때 서로 같은 문자열이면 0을, 다르면 -1을 반환한다.