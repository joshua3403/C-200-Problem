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

// C++11 ǥ�� ���̺귯������ promise, future, async Ŭ������ �߰��Ǿ���. ���� ������ �����ϰ� ���α׷��� ���伺�� ����� �� �ִ� ������
// �񵿱� ���α׷��� �Լ��̴�. �׵��� ��Ƽ������ ȯ�濡�� ����ȭ�� ���� ���� ����� ���ԵǾ�����, �ڵ� �������� ���� ������ �߻��� ���
// ������ �ľ��ϴµ� �ð��� ���� �ɸ��� ������ �־���.
// ����, ��� ���α׷��� ������ �ۼ��� �������� �߻��ϴ� ����ð� ���� ���� � �־���. ������, �񵿱�� �ڵ带 �����ϸ� �̷� �������� �����ο��� �� �ִ�.