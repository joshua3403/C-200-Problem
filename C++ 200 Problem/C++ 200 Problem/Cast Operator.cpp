#include "pch.h"
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int x = 2;
	double y = 4.4;

	int i = static_cast<int>(y / x);
	int j = (int)y / x;
	double k = y / x;

	cout << "4.4 / 2 = (static_cast<int>) " << i << endl;
	cout << "4.4 / 2 = (int) " << j << endl;
	cout << "4.4 / 2 = " << k << endl;

	return 0;
}

// 자료형을 변경하는 방법으로는 기존의 C언어의 방식대로 괄호 안에 원하는 자료형을 넣어 다른 변수에 할당하는 방법이 있다.
// 이런 C언어 스타일의 형변환은 아무 조건도 없이 무작정 변경을 한다는 단점이 있다. 이로인해 C++에서는 4가지의 형변환 연산자를 제공한다.
// static_cast<> : 가장 기본적인 캐스트 연산 방법
// dynamic_cast<> : 객체지향 언어의 다형성을 이용하여 모호한 타입 캐스팅 오류를 막아줌
// const_cast<> : 자료형이 갖고 있는 상수 속성을 제거
// reinterpret_cast<> : 어떠한 포인터 타입끼리도 변환할 수 있게 도움