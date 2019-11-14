#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string silla = "divided into the Three kingdoms.";
	string joseon = "Yi Seong-gye, established Joseon in 1392.";

	transform(silla.begin(), silla.end(), silla.begin(), toupper);
	transform(joseon.begin(), joseon.end(), joseon.begin(), tolower);

	char lower_ch = 'g';
	char upper_ch = 'B';

	lower_ch = toupper(lower_ch);
	upper_ch = tolower(upper_ch);

	cout << "문자열 대문자로 변환 : " << silla << endl;
	cout << "문자열 소문자로 변환 : " << joseon << endl;
	cout << "문자 대문자로 변환 : " << lower_ch << endl;
	cout << "문자 소문자로 변환 : " << upper_ch << endl;

	return 0;
}

// 문자열 전체를 대문자나 소문자로 변환하는 transform함수를 이용하자
// transform 함수 인자 전달 순서 : 1. 복사할 문자열의 시작점 2. 복사할 문자열의 종료점 3. 복사될 문자열의 시작점(다른 문자열 변수에 대입할 수 있음) 4. 대문자로 변환하려면 toupper, 소문자로 변환하려면 tolower 사용