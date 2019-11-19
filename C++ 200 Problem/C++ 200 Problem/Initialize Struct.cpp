#include "pch.h"
#include <iostream>
using namespace std;

struct Data1
{
	Data1(int x) : number(x) {}

	int number;
};

struct Data2
{
	Data2()
	{
		number = 10;
	}

	int number;
} data2;


int main()
{

	Data1 data1(2);
	cout << "Data1 number : " << data1.number << endl;
	cout << "Data2 number : " << data2.number << endl;

	return 0;
}

// 구조체도 클래스의 생성자와 비슷한 초기화 소스 코드가 존재한다.
// 위의 두가지 방법으로 구조체 변수를 초기화 할 수 있다.
