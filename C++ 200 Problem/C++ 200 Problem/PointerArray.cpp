#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	const int kSize = 3;
	int numbers[kSize] = { 10, 20, 30 };
	int *pointer1 = numbers;

	int no1 = 1;
	int no2 = 2;
	int no3 = 3;
	int *pointer2[kSize] = { &no1, &no2, &no3 };

	for (int i = 0; i < kSize; i++)
		cout << "Pointer1[" << i << "] = " << *(pointer1 + i) << endl;

	for (int i = 0; i < kSize; i++)
		cout << "Pointer2[" << i << "] = " << *pointer2[i] << endl;

	return 0;
}

// 배열을 하나 선언하고 포인터 변수에 그 주소를 지정한다. 배열의 포인터 주소는 numbers[0]을 가리키며, 증감 연산자로 주소를 증가하면 numbers[1], numbers[2]로 포인터가 가리키는 곳이 변경된다.
// 포인터 배열을 선언하며 초기값도 함께 지정하도록 하자. 만약 배열을 선언만 해놓고 초기화하지 않으면 쓰레가 값이 들어가 나중에 버그 등이 발생할 때 원인을 추적하기 어려워진다.
// pointer1은 numbers의 주소를 가지고 있기 때문에 18번 행처럼 소스를 구성해야 실제 값을 출력할 수 있다.