#include "pch.h"
#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
	bitset<8> data1(100);
	bitset<8> data2(0x78);
	bitset<8> data3(string("11110000"));

	cout << "data1 : " << data1 << endl;
	cout << "data2 : " << data2 << endl;
	cout << "data3 : " << data3 << endl;

	data1.set();

	cout << endl << "== data1 ==" << endl;

	cout << "data1 all : " << data1.all() << endl;
	cout << "data1 any : " << data1.any() << endl;
	cout << "data1 none : " << data1.none() << endl;

	data2.reset();

	cout << endl << "== data2 ==" << endl;

	cout << "data2 all : " << data2.all() << endl;
	cout << "data2 any : " << data2.any() << endl;
	cout << "data2 none : " << data2.none() << endl;

	return 0;
}

// bitset�� ���� �Ͽ� ������ ������� �ʱ�ȭ�Ѵ�. ������ ���� �Է��ϰų�, 16������ �Է��ϰų�, ���ڿ��� �̿��� �Է��� �� �ִ�.
// set() �Լ��� ��� ��Ʈ�� 1�� �ʱ�ȭ �Ѵ�.
// all() : ��� ��Ʈ�� 1�̸� true�� ����
// any() : �ϳ��� ��Ʈ�� 1�̾ true�� ����
// none() : ��� ��Ʈ�� 0-�̸� true�� ����
// reset() �Լ��� ��� ��Ʈ�� 0���� �ʱ�ȭ �Ѵ�.