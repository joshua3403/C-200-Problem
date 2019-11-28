#include "pch.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void Pause(int sec)
{
	this_thread::sleep_for(chrono::seconds(sec));
}

int main()
{
	thread sleep1(Pause, 3);
	thread sleep2(Pause, 4);
	thread sleep3(Pause, 5);

	sleep1.join();
	cout << "3초 대기" << endl;

	sleep2.join();
	cout << "4초 대기" << endl;

	sleep3.join();
	cout << "5초 대기" << endl;

	return 0;
}

// 스레드는 한 프로세스에서 실행되는 단위를 의미한다.
// 프로세스 내부적으로 여러 스레드들은 한정된 시스템 자원을 공유 또는 독점한다.
// 스레드를 제어하는 주체는 OS 스케줄러로 동작 방식은 CPU 사양에 따라 다르다.
// 스레드는 프로세스가 더 많고 복잡한 작업을 위해 탄생한 실행 단위기도 하다.
// chrono는 C++ 개발을 돕는 라이브러리로 boost에 속해있던 것이다.
