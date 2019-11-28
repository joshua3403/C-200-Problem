#include "pch.h"
#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
	bitset<8> data1(100);
	bitset<8> data2(0x78);
	bitset<8> data3(string("11110000"));

	cout << "data1 : " << data1 << endl;
	cout << "data2 : " << data2 << endl;
	cout << "data3 : " << data3 << endl;

	data1.set();

	cout << endl << "== data1 ==" << endl;

	cout << "data1 all : " << data1.all() << endl;
	cout << "data1 any : " << data1.any() << endl;
	cout << "data1 none : " << data1.none() << endl;

	data2.reset();

	cout << endl << "== data2 ==" << endl;

	cout << "data2 all : " << data2.all() << endl;
	cout << "data2 any : " << data2.any() << endl;
	cout << "data2 none : " << data2.none() << endl;

	return 0;
}

// bitset을 선언 하여 세가지 방법으로 초기화한다. 정수를 직접 입력하거나, 16진수를 입력하거나, 문자열을 이용해 입력할 수 있다.
// set() 함수는 모든 비트를 1로 초기화 한다.
// all() : 모든 비트가 1이면 true를 리턴
// any() : 하나의 비트만 1이어도 true를 리턴
// none() : 모든 비트가 0-이면 true를 리턴
// reset() 함수는 모든 비트를 0으로 초기화 한다.