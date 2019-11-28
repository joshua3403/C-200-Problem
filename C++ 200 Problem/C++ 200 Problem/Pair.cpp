#include "pch.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	pair<string, int> data("백제 근초고왕", 13);

	cout << data.first << " " << data.second << "대왕" << endl;

	return 0;
}

// 두 개의 자료형을 하나의 컨테이너에서 치리할 수 있도록 돕는 것이 pair이다.
// pair는 std에 정의되어 있어 별도의 인클루드가 필요하지 않는다.