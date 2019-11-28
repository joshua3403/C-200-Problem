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
	cout << "3�� ���" << endl;

	sleep2.join();
	cout << "4�� ���" << endl;

	sleep3.join();
	cout << "5�� ���" << endl;

	return 0;
}

// ������� �� ���μ������� ����Ǵ� ������ �ǹ��Ѵ�.
// ���μ��� ���������� ���� ��������� ������ �ý��� �ڿ��� ���� �Ǵ� �����Ѵ�.
// �����带 �����ϴ� ��ü�� OS �����ٷ��� ���� ����� CPU ��翡 ���� �ٸ���.
// ������� ���μ����� �� ���� ������ �۾��� ���� ź���� ���� �����⵵ �ϴ�.
// chrono�� C++ ������ ���� ���̺귯���� boost�� �����ִ� ���̴�.