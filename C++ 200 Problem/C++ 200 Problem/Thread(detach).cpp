#include "pch.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void Pause(int sec)
{
	this_thread::sleep_for(chrono::seconds(sec));
	cout << sec << "�� ���" << endl;
}

int main()
{
	thread sleep1(Pause, 3);
	thread sleep2(Pause, 4);
	thread sleep3(Pause, 5);

	sleep1.detach();
	sleep2.detach();
	sleep3.detach();

	getchar();

	return 0;
}

// detach�� ���� �����忡�� �ش� �����带 �и��Ѵ�. �ش� ������� ���� �� ����Ǵ� ������ ������ �ڿ��� ��ȯ�� �����ȴ�.
// �ٸ�, detach�� �и��� ������� ������ �� ���� ������ �� �����尡 ���� ��� ������� �����ϱ� ��ƴ�.