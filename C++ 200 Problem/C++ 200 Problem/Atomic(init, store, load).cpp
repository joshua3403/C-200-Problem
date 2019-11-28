#include "pch.h"
#include <atomic>
#include <iostream>

using namespace std;

int main()
{
	atomic<int> data1 = 10;
	atomic<int> data2 = ATOMIC_VAR_INIT(20);
	atomic_int data3 = ATOMIC_VAR_INIT(30);

	cout << data1 << ", " << data2 << ", " << data3 << endl;

	data1.store(11);
	data2.store(data3.load());

	atomic_store(&data3, 50);

	cout << data1 << ", " << data2 << ", " << data3 << endl;

	return 0;
}

// 멀티 스레딩 환경에서 프로그래밍을 할 때, 세마포어, 뮤택스, violate 등 공유 자원을 사용하기 위한 여러 기법을 활용할 것이다.
// 여기서는 그때 필요한 클래스인 atomic 활용 방법을 알아보자.
// atomic으로 인터락 등을 활요해 동기화 객체를 사용하기 위한 기법들을 생략하면 더 쉽게 프로그래밍 할 수 있다.
// 위의 atomic을 초기화 하는 3가지 방법중 편한 것을 골라 사용하면 된다.