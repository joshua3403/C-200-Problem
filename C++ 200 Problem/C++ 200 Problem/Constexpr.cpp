#include "pch.h"
#include <iostream>

using namespace std;

constexpr int GetNumber1()
{
	return 2;
}

constexpr int GetNumber2(int x, int y)
{
	return x + y;
}

int main()
{
	int array1[GetNumber1()];
	int array2[GetNumber2(1, 2)];

	cout << sizeof(array1) << ", " << sizeof(array2) << endl;

	return 0;
}

// const를 이용해 상수를 만들어 사용할 수 있지만, 선언과 함께 값을 결정해야 하는 장점이자 단점이 존재한다.
// 하지만 constexpr은 컴파일 시점에 값을 결정하기 때문에 const보단 유연하게 값을 결정하여 사용할 수 있다.
// 배열 또한 선언과 함께 크기를 지정해야 하는데 크기가 고정적이지 않을 수 있다.
// 이때 constexpr은 아주 좋은 해결책이 된다.