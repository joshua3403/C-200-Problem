#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence("i hate coding");

	sentence.erase(0, 7);
	
	cout << "I like " << sentence << endl;

	return 0;
}

// 문자열에서 erase 함수를 호출하여 문자열 일부를 제거할 수 있다. 
// 이때 2개의 인자가 필요한데 첫 번째는 제거할 영역의 시작 인덱스고, 두 번째는 제거할 문자의 개수이다.