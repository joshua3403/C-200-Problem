#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> data1 = { 1,3,5,7 };
	vector<string> data2 = { "ab", "cd", "sef" };

	if (all_of(data1.begin(), data1.end(), [](int i) {return i % 2; }))
		cout << "data1 : 모두 홀수입니다." << endl;

	if (all_of(data1.begin(), data1.end(), [](int i) {return i < 10; }))
		cout << "data1 : 모두 10보다 작습니다." << endl;

	if (all_of(data2.begin(), data2.end(), [](string i) {return i.length() < 4 ? true : false; }))
		cout << "data2 : 모두 길이가 4 이하입니다." << endl;

	if (all_of(data2.begin(), data2.end(), [](string i) {return i.find('A'); }))
		cout << "data2 : 모두 문자 A를 포함하지 않습니다." << endl;

	return 0;
}

// all_of 함수는 컨테이너를 순회하며 모든 데이터가 특정 조건에 맞는지 확인하는 함수이다.
// 인자는 3개가 필요한데, 첫 번째는 순회 시작의 위치, 두 번째는 컨테이너의 순회 마지막 위치,
// 세 번째는 사용자 정의 조건이다.