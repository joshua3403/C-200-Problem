#include "pch.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	pair<string, int> data("���� ���ʰ��", 13);

	cout << data.first << " " << data.second << "���" << endl;

	return 0;
}

// �� ���� �ڷ����� �ϳ��� �����̳ʿ��� ġ���� �� �ֵ��� ���� ���� pair�̴�.
// pair�� std�� ���ǵǾ� �־� ������ ��Ŭ��尡 �ʿ����� �ʴ´�.