#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	string yong_name = "�輱��";
	string chung_name = "��û���ٺ�";

	cout << "yong_name�� ���� : " << yong_name.length() << endl;
	cout << "chung_name�� ���� : " << chung_name.length() << endl;

	return 0;
}

// ���ĺ��� ��ҹ��� 52���� 0���� 127�� ������ �ƽ�Ű ���ڷ� ǥ���� �� �ִ�.
// ������, �ѱ��� 1����Ʈ �ƽ�Ű ���ڷ� ǥ������ ���ϹǷ�, 0~65,535���� ǥ�� ������ 2����Ʈ�� �� ���ڸ� ��´�.