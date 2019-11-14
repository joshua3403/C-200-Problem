#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	string baekhap_war = "백합벌 전투 : 백제 왕자 부여창의 일기토로 유명한 전투.";
	
	int rtn = baekhap_war.find("부여창");

	if (rtn > 0)
		cout << "문자열을 찾았습니다. 위치는 " << baekhap_war.at(rtn) << "입니다.\n";
	else
		cout << "문자열을 찾을 수 없습니다.\n";

	return 0;
}

// 문자열 뒤에 find 함수를 호출하여 찾고자 하는 임의의 문자열을 입력한다.
// 만약 찾지 못하면 -1(string::npos)를, 찾았으면 해당 문자의 위치값을 리턴한다.