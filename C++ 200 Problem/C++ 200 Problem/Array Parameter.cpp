#include "pch.h"
#include <iostream>

using namespace std;

void Print(int *arr)
{
	cout << "== Print1 ==" << endl;
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

	arr[1] = 1000;
}

void Print2(int arr[])
{
	cout << "== Print2 ==" << endl;
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

	arr[2] = 2000;
}

int main()
{
	int data[3] = { 0,1,2 };

	Print(data);
	Print2(data);
	cout << "== ��� == " << endl;

	cout << data[0] << ", " << data[1] << ", " << data[2] << endl;

	return 0;
}

// �迭�� ���ڷ� ����� �� 2���� ����� �ִµ�, �ϳ��� int *arr�� int arr[]�� �ִ�. �Ѵ� �Ȱ��� �����ͷ� ó���ϱ� ������ �Լ� ���ο��� ����ϴ� ������� ����.
// ��� call by reference�̹Ƿ� �Լ� ���ο��� ���� �� ������ �����ϴ�.