#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class TmpClass
{
public:
	TmpClass() : number1(10), number2(20), name("���� : ���ڸ�� �Ƶ�") {}

	void print()
	{
		cout << number1 << ", " << number2 << ", " << number3 << ", " <<  name << endl;
	}

private:
	int number1 = 1;
	const int number2 = 2;
	static const int number3 = 3;
	string name = "���� : ������� �Ƶ�";
};

int main()
{
	TmpClass tc;
	tc.print();

	return 0;
}

// Ŭ���� ������ �ʱ�ȭ ����Ʈ���� ������ �ʱ�ȭ �Ѵ�.
// ������ �ʱ�ȭ ����Ʈ������ �����ڰ� ȣ��Ǵ� ������ ���� ���� �����ϱ� ������ ���� ���� �����ϰ� ���ο� ������ �Ҵ��Ѵ�.