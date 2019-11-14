#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence("I like coding!");
	string find_str("coding");
	string replace_str("history");

	sentence.replace(sentence.find(find_str), find_str.length(), replace_str);

	cout << sentence << endl;
	

	return 0;
}

// 문자열을 교체할 때는 replace 함수를 사용한다.
// 첫 번째 인자로 sentence.find()를 사용, 원하는 문자열을 찾아 그 위치를 알아낸다.
// 두 번째 인자로 찾아야 할 문자열의 길이를 replace 함수에 알려준다.
// 세 번째 인자로 교체할 새로운 문자열을 넣는다.