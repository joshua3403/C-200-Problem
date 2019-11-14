#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	const int kSize = 3;
	int numbers[kSize] = { 10, 20, 30 };
	int *pointer1 = numbers;

	int no1 = 1;
	int no2 = 2;
	int no3 = 3;
	int *pointer2[kSize] = { &no1, &no2, &no3 };

	for (int i = 0; i < kSize; i++)
		cout << "Pointer1[" << i << "] = " << *(pointer1 + i) << endl;

	for (int i = 0; i < kSize; i++)
		cout << "Pointer2[" << i << "] = " << *pointer2[i] << endl;

	return 0;
}

// �迭�� �ϳ� �����ϰ� ������ ������ �� �ּҸ� �����Ѵ�. �迭�� ������ �ּҴ� numbers[0]�� ����Ű��, ���� �����ڷ� �ּҸ� �����ϸ� numbers[1], numbers[2]�� �����Ͱ� ����Ű�� ���� ����ȴ�.
// ������ �迭�� �����ϸ� �ʱⰪ�� �Բ� �����ϵ��� ����. ���� �迭�� ���� �س��� �ʱ�ȭ���� ������ ������ ���� �� ���߿� ���� ���� �߻��� �� ������ �����ϱ� ���������.
// pointer1�� numbers�� �ּҸ� ������ �ֱ� ������ 18�� ��ó�� �ҽ��� �����ؾ� ���� ���� ����� �� �ִ�.