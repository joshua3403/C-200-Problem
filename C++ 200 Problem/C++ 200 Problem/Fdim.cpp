#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << fdim(-1.0, 0.0) << endl;
	cout << fdim(1.0, 0.0) << endl;
	cout << fdim(0.0, 0.0) << endl;
	cout << fdim(5, 1) << endl;
	cout << fdim(6, 15) << endl;
	cout << fdim(4.9, 1.1) << endl;
	cout << fdim(5.9, 20.1) << endl;

	return 0;
}

// fdim 함수는 두 숫자를 인자로 받아 그 차이를 반환한다.
// 인자 2개를 받는데 첫 번째 인자가 더 커야 차이를 반환하고, 더 작다면 0을 반환한다.