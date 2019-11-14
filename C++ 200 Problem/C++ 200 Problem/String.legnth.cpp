#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	string yong_name = "김선용";
	string chung_name = "김청원바보";

	cout << "yong_name의 길이 : " << yong_name.length() << endl;
	cout << "chung_name의 길이 : " << chung_name.length() << endl;

	return 0;
}

// 알파벳은 대소문자 52개를 0에서 127로 구성된 아스키 문자로 표현할 수 있다.
// 하지만, 한글은 1바이트 아스키 문자로 표현히지 못하므로, 0~65,535까지 표현 가능한 2바이트에 한 글자를 담는다.