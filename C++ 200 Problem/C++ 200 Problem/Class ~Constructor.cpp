#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class TmpClass
{
public:
	TmpClass()
	{
		cout << "������ ȣ��" << endl;
	}

	~TmpClass()
	{
		cout << "�Ҹ��� ȣ��" << endl;
	}

};

int main()
{
	TmpClass *temp_class = new TmpClass();

	delete temp_class;
	temp_class = nullptr;

	return 0;
}

// Ŭ���� ��ü�� ���� ���� ����ϴ� ������ ���� �Ǵ� �� ������ �޸� �Ҵ��� �̷�����.
// ����� ������ ���� �޸� ������ �̷������ ��ǻ�ͷ� �ش� �޸� ������ ��ȯ�ȴ�.
// �����Ϸ��� �̸� ���� Ŭ���� ��ü�� ���� �� �� �Ҹ��� �Լ��� ȣ���Ѵ�.
// �����͸� �̿��� new ��ü�� �����ϸ� ������ �ƴ� �� ������ �Ҵ�ȴ�.
// ��ü�� new�� �����ϸ� delete�� �����ϰ� �����ʹ� null�� ������ �Ѵ�.