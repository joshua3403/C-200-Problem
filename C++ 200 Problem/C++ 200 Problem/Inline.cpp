#include "pch.h"
#include <iostream>

using namespace std;

inline int Max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	for (int i = 0; i < 5; i++)
		cout << Max(i, i + 10) << endl;

	return 0;
}

// 함수 호출이 빈번하다면 inline 키워드를 이용하는 것이 좋다.
// 일반적으로 함수 호출은 비용이 많이 발생한다고 표현하는데, 즉 프로그램 성능 저하를 의미한다.
// 그래서 자주 사용되며 코드가 짧은 함수라면 인라이닝 하는 것이 좋다.
// inline으로 선언된 함수는 컴파일 단계에서 소스가 그대로 복사되어 호출 지점에 삽입된다.
// 그래서 전체 프로그램 크기는 커질 수 있다.