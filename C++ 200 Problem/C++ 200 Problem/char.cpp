// C++ 200 Problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	char ch1 = 'c';
	char ch2 = 200;

	unsigned char ch3 = 'c';
	unsigned char ch4 = 200;

	printf("char char1 = %c, %d\n", ch1, ch1);
	printf("char char2 = %c, %d\n", ch2, ch2);
	printf("char char3 = %c, %d\n", ch3, ch3);
	printf("char char4 = %c, %d\n", ch4, ch4);

}

// char 변수는 숫자로도 값을 할당가능, 숫자는 아스키 포드표에서 제시하는 문자와 같음
// unsigned char는 기호 없는 char란 뜻으로 양수만 저장한다는 의미를 갖고있다. 범위가 0 ~ 255로 변경된다.
// char 변수의 범위를 초과하는 값이 입력되면 보수를 취하게 된다.
// unsigned char 범위에 속하는 숫자는 정상적으로 출력되지만 해당하는 아스키 코드가 없는 경우 ?가 출력된다.


