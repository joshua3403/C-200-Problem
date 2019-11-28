#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void Type1(string msg, int no, double value)
{
	cout << msg << ", 에러 번호 " << no << ", 오류값 " << value << endl;
}

void Type2(int no, double value)
{
	cout << no << ", 오류값 : " << value << endl;
}

template<typename...T>
void Print(T... arg0)
{
	Type1(arg0...);
}

int main()
{
	Print <string, int, double>("Warning", 100, 22.5);
	
	return 0;
}

// 가변인자 템플릿을 사용할 땐 25번 라인처럼 <> 괄호 안ㅇ에 자료형 타입을 정의해야 한다.
// 그리고 자료형에 맞춰 인자를 전달해야 오류없이 함수 호출을 할 수 있다.
// 가변인자 템플릿을 사용하면 Print와 같은 함수는 원형을 유지할 수 있다.