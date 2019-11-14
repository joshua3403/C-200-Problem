#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x = 1;

	cout << " x = " << x++ << endl;
	cout << " x = " << x++ << endl;
	cout << " x = " << ++x << endl;
	cout << " x = " << x-- << endl;
	cout << " x = " << x-- << endl;
	cout << " x = " << --x << endl;

	return 0;
}

// 전위 : 변수를 변화시킨뒤 사용
// 후위 : 변수를 사용한뒤 변화