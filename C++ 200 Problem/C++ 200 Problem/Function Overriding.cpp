#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	void Display()
	{
		cout << "��� 16��� ����" << endl;
	}
};

class Derived : Base
{
public:
	void Display()
	{
		cout << "��� 17��� ����" << endl;
	}
};

int main()
{
	Derived child;
	child.Display();

	return 0;
}

// �����ε��� ����, ���ϰ� ���� ������ ���� �̸��� �Լ��� ����ϴ� ���̴�.
// �������̵��� �̿ʹ� �ٸ��� ��� ���迡�� �߻��ϴ� ������ �θ� Ŭ���� �Լ��� �ڽ� Ŭ�������� �ٽ� �����Ѵٴ� �ǹ��̴�.
// �������̵��� �̷������ �θ� Ŭ�������� ���ǵ� ������ ���õȴ�.