#include "pch.h"
#include <atomic>
#include <iostream>

using namespace std;

int main()
{
	atomic<int> data1 = 10;
	atomic<int> data2 = ATOMIC_VAR_INIT(20);
	atomic_int data3 = data1.exchange(data2.load());

	cout << data1 << ", " << data2 << ", " << data3 << endl;

	atomic_exchange(&data1, data3);
	atomic_exchange(&data2, data1.load());
	atomic_exchange(&data3, 55);

	cout << data1 << ", " << data2 << ", " << data3 << endl;
	
	return 0;
}

// exchange 함수의 리턴값은 변경되기 이전 값이다.
// exchange 함수와 atomic_exchange 함수의 기능은 같다.