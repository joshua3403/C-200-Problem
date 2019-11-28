#include "pch.h"
#include <iostream>

using namespace std;

template <typename T>
T Plus(T x, T y, T z = 1)
{
	return x + y + z;
}

int main()
{
	int number1 = Plus(1, 2);
	int number2 = Plus(1, 2, 3);
	double number3 = Plus(1.1, 2.2);
	double number4 = Plus(1.1, 2.2, 3.3);

	cout << "결과값 : " << number1 << ", " << number2 << ", " << number3 << ", " << number4 << endl;

	return 0;
}

// template이란 키워드가 있으면 컴파일러는 소스 빌드 단계에서 자료형을 유추한다.
// 프로그래머는 template을 이용해 하나의 함수에 다양한 자료형을 넘길 수 있다.
// template을 선언하면 <typename ?> 사이의 물음표를 채워야 한다. 일종의 이름 짓기인데 T는 변수처럼 원하는 이름으로 설정 가능하다.
// 컴파일러는 T 라는 자료형이 무엇인지 유추하게 된다.
// 또한, 함수 템플릿에서도 디폴트 매개변수를 사용할 수 있다.