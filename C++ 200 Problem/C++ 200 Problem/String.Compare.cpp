#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	string seven_war = "û������";
	string korea_war = "�ѱ�����";

	if (seven_war.compare(korea_war) != 0)
		cout << "�ٸ� ���ڿ��Դϴ�." << endl;
	else
		cout << "���� ���ڿ��Դϴ�." << endl;

	return 0;
}

// ���� ���ڿ��� compare() �Լ��� ȣ���ϰ� ���ڷ� �ٸ� ���ڿ��� �ѱ�µ�, �̶� ���� ���� ���ڿ��̸� 0��, �ٸ��� -1�� ��ȯ�Ѵ�.