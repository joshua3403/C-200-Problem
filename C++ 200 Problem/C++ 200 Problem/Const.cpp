#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string kMyJob = "developer";

	string question = "who are you : ";
	string answer = "my job is : ";

	cout << question << kMyJob << endl;
	cout << answer << kMyJob << endl;

	return 0;
}

// �Ϲ������� ������� ���� �������� const�� ������ ���� �����ϴµ�, �̷� ��� �Ź� ���� �����ϴ� ������ ������ �� �ִ�.
// const�� �Լ� ����, ����, ������ ��� ����� �� �־� �� ���ӻ��� �پ��ϴ�.