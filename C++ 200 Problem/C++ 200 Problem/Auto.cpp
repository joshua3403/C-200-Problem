#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int GetInt(){ return 1; }
double GetDouble(){ return 1.11; }
string GetString(){	return "3"; }

auto add(int x, int y) -> int
{
	return x + y;
}

int main()
{
	auto data1 = GetInt();
	auto data2 = GetDouble();
	auto data3 = GetString();
	auto data4 = add(5.1, 10.2);

	cout << "Data1 : " << data1 << ", " << typeid(data1).name() << endl;
	cout << "Data2 : " << data2 << ", " << typeid(data2).name() << endl;
	cout << "Data3 : " << data3 << ", " << typeid(data3).name() << endl;
	cout << "Data4 : " << data4 << ", " << typeid(data4).name() << endl;

	return 0;

}

// auto 키워드를 사용하면 같은 소수, 같은 기능의 함수를, 재사용할 수 있는 장점이 있다.
// 하지만, 너무 남발하면 가독성을 떨어뜨려 해당 자료형이 무엇인지 프로그래머 본인 조차 유추하기 힘들어지는 경우가 있다.
// 새로운 함수 문법으로 auto를 반환할 때 리턴값의 타입을 지정할 수 있다.