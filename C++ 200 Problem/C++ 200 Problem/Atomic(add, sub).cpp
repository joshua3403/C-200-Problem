#include "pch.h"
#include <atomic>
#include <iostream>

using namespace std;

int main()
{
	atomic<int> data1 = 1;
	data1++;
	data1 += 1;
	data1.fetch_add(1);
	atomic_fetch_add(&data1, 1);

	atomic<int> data2 = 200;
	data2--;
	data2 -= 1;
	data2.fetch_sub(1);
	atomic_fetch_sub(&data2, 1);

	cout << "data1 : " << data1 << ", data2 : " << data2 << endl;

	return 0;
}

// C++11 표준 라이브러리에는 promise, future, async 클래스가 추가되었다. 병목 현상을 방지하고 프로그램의 응답성을 향상할 수 있는 것으로
// 비동기 프로그래밍 함수이다. 그동안 멀티스레드 환경에서 동기화를 위해 여러 기법이 도입되었으나, 코드 구현량이 많고 에러가 발생할 경우
// 원인을 파악하는데 시간이 오래 걸리는 문제가 있었다.
// 또한, 통신 프로그램은 데이터 송수신 과정에서 발생하는 응답시간 지연 문제 등도 있었다. 하지만, 비동기로 코드를 구현하면 이런 문제에서 자유로워질 수 있다.