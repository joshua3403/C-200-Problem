#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	auto result1 = min(1, 5);
	auto result2 = max('a', 'z');

	cout << result1 << ", " << result2 << endl;

	auto result3 = minmax({ 'a', 'n', 'z' });
	auto result4 = minmax({ 1,2,3 });

	cout << result3.first << ", " << result3.second << endl;
	cout << result4.first << ", " << result4.second << endl;

	return 0;
}

// 문자를 비교할 땐 아스키 코드 값으로 비교한다.
// minmax의 경우 pair형을 반환한다. first에는 min값이 second에는 max값이 저장된다.
