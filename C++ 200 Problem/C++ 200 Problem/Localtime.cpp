#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t now = time(NULL);
	tm ptm;
	localtime_s(&ptm, &now);

	char buffer[64];
	strftime(buffer, 64, "���� ����� ������ %Y�� %m�� %d��, %H�� %M�� %S���Դϴ�.(%p)\n", &ptm);

	cout << buffer;
	
	return 0;
}

// ��¥�� �ð��� ���� �� �ִ� time_t����.
// tm�� ����ü�� localtime_s �Լ��� �̿��� int ��¥�� �ð� ���� �����Ѵ�.
// strftime�� 3��° ������ ���ڿ��� 2��° ������ ũ�⸸ŭ 1��° �迭�� �Ҵ��ϴ� ����.