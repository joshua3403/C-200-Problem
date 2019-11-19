#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	int number1 = 10;
	int number2 = 20;

	int const *ptr1;
	ptr1 = &number1;
	// ptr1 = number1;
	ptr1 = &number2;

	int *const ptr2 = &number1;
	*ptr2 = number2;
	//ptr2 = &number2;

	return 0;
}

// const int를 가리키는 의미로 가리키는 대상을 변경할 수는 있지만, 값을 직접 변경할 수는 없다.
// int를 가리키는 const 포인터로 초기값이 반드시 필요하며 가리키는 대상을 바꿀 수 없다.
// 꼭 기억할 것.