#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string kMyJob = "developer";

	string question = "who are you : ";
	string answer = "my job is : ";

	cout << question << kMyJob << endl;
	cout << answer << kMyJob << endl;

	return 0;
}

// 일반적으로 변경되지 않을 변수들을 const로 선언해 따로 관리하는데, 이럴 경우 매번 변수 선언하는 행위를 생략할 수 있다.
// const는 함수 인자, 변수, 포인터 등에도 사용할 수 있어 그 쓰임새가 다양하다.