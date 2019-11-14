#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string sentence("I like coding!");

	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());

	cout << sentence << endl;

	return 0;
}

// 문자열에서 특정 문자만 제거할 때에는 다양한 방법이 있지만, erase와 remove 함수를 함꼐 사용한다.
// erase함수의 첫 번째 인자로 remove 함수가 호출되었는데, 이 함수는 특정 문자가 있는 모든 인덱스를 erase 함수에 알려준다.
// 문자열의 시작에서 마지막 위치까지 순회하며 원하는 문자의 위치를 erase 함수에 리턴하는 것이다.