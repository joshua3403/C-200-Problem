#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void Type1(string msg, int no, double value)
{
	cout << msg << ", ���� ��ȣ " << no << ", ������ " << value << endl;
}

void Type2(int no, double value)
{
	cout << no << ", ������ : " << value << endl;
}

template<typename...T>
void Print(T... arg0)
{
	Type1(arg0...);
}

int main()
{
	Print <string, int, double>("Warning", 100, 22.5);
	
	return 0;
}

// �������� ���ø��� ����� �� 25�� ����ó�� <> ��ȣ �Ȥ��� �ڷ��� Ÿ���� �����ؾ� �Ѵ�.
// �׸��� �ڷ����� ���� ���ڸ� �����ؾ� �������� �Լ� ȣ���� �� �� �ִ�.
// �������� ���ø��� ����ϸ� Print�� ���� �Լ��� ������ ������ �� �ִ�.