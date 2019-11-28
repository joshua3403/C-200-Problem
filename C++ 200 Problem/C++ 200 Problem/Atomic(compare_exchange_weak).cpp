#include "pch.h"
#include <atomic>
#include <iostream>

using namespace std;

int main()
{
	atomic<int> data1(10);

	int number = 20;

	bool is_exchange = data1.compare_exchange_weak(number, 30);

	cout << boolalpha;
	cout << "data1 : " << data1 << ", number : " << number << ", " << is_exchange << endl;

	return 0;
}

// compare_exchange_weak는 값 교체가 이루어지면 true, 그렇지 않다면 false를 리턴한다.
// 함수의 첫 번째 인자 number와 data1의 값이 같지 않다면 data1은 변경되지 않는다.
// 그리고 number는 data1의 값을 갖게 된다.