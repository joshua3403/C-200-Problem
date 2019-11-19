#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class TmpClass
{
public:
	TmpClass() : number1(10), number2(20), name("나운 : 문자명왕 아들") {}

	void print()
	{
		cout << number1 << ", " << number2 << ", " << number3 << ", " <<  name << endl;
	}

private:
	int number1 = 1;
	const int number2 = 2;
	static const int number3 = 3;
	string name = "조다 : 장수왕의 아들";
};

int main()
{
	TmpClass tc;
	tc.print();

	return 0;
}

// 클래스 생성자 초기화 리스트에서 변수를 초기화 한다.
// 생성자 초기화 리스트에서는 생성자가 호출되는 시점에 변수 값을 설정하기 때문에 이전 값을 무시하고 새로운 값으로 할당한다.