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

// ��Ƽ ������ ȯ�濡�� ���α׷����� �� ��, ��������, ���ý�, violate �� ���� �ڿ��� ����ϱ� ���� ���� ����� Ȱ���� ���̴�.
// ���⼭�� �׶� �ʿ��� Ŭ������ atomic Ȱ�� ����� �˾ƺ���.
// atomic���� ���Ͷ� ���� Ȱ���� ����ȭ ��ü�� ����ϱ� ���� ������� �����ϸ� �� ���� ���α׷��� �� �� �ִ�.
// ���� atomic�� �ʱ�ȭ �ϴ� 3���� ����� ���� ���� ��� ����ϸ� �ȴ�.