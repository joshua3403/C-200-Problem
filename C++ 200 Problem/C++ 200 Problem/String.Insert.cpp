#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence("i coding");
	sentence.insert(2, "hate ");
	cout << sentence << endl;

	sentence.insert(7, "or like ");
	cout << sentence << endl;

	return 0;
}

// 원하는 인덱스를 넣어 문자, 문자열을 추가할 수 있다.