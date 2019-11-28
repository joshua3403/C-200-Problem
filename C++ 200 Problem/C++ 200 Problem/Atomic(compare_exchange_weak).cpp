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

// compare_exchange_weak�� �� ��ü�� �̷������ true, �׷��� �ʴٸ� false�� �����Ѵ�.
// �Լ��� ù ��° ���� number�� data1�� ���� ���� �ʴٸ� data1�� ������� �ʴ´�.
// �׸��� number�� data1�� ���� ���� �ȴ�.