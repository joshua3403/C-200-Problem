#include "pch.h"
#include <iostream>

using namespace std;

int main()
{

	cout << "== 소수점 버리기 ==" << endl;
	cout << "floor(1.1) : " << floor(1.1) << endl;
	cout << "floor(2.3) : " << floor(-2.3) << endl;
	cout << "floor(40.5) : " << floor(40.5) << endl;
	cout << "floor(55.7) : " << floor(-55.7) << endl;
	cout << "floor(100.9) : " << floor(100.9) << endl;

	cout << "== 소수점 올리기 ==" << endl;
	cout << "ceil(1.1) : " << ceil(1.1) << endl;
	cout << "ceil(2.3) : " << ceil(-2.3) << endl;
	cout << "ceil(40.5) : " << ceil(40.5) << endl;
	cout << "ceil(55.7) : " << ceil(-55.7) << endl;
	cout << "ceil(100.9) : " << ceil(100.9) << endl;
	return 0;
}

// 소수점을 버리면 더 작아진다.
// 소수점을 올리면 더 커진다.
// 음수를 올리고 버릴때 기억하길 바란다.
