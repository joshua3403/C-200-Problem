#include "pch.h"
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int x = 2;
	double y = 4.4;

	int i = static_cast<int>(y / x);
	int j = (int)y / x;
	double k = y / x;

	cout << "4.4 / 2 = (static_cast<int>) " << i << endl;
	cout << "4.4 / 2 = (int) " << j << endl;
	cout << "4.4 / 2 = " << k << endl;

	return 0;
}

// �ڷ����� �����ϴ� ������δ� ������ C����� ��Ĵ�� ��ȣ �ȿ� ���ϴ� �ڷ����� �־� �ٸ� ������ �Ҵ��ϴ� ����� �ִ�.
// �̷� C��� ��Ÿ���� ����ȯ�� �ƹ� ���ǵ� ���� ������ ������ �Ѵٴ� ������ �ִ�. �̷����� C++������ 4������ ����ȯ �����ڸ� �����Ѵ�.
// static_cast<> : ���� �⺻���� ĳ��Ʈ ���� ���
// dynamic_cast<> : ��ü���� ����� �������� �̿��Ͽ� ��ȣ�� Ÿ�� ĳ���� ������ ������
// const_cast<> : �ڷ����� ���� �ִ� ��� �Ӽ��� ����
// reinterpret_cast<> : ��� ������ Ÿ�Գ����� ��ȯ�� �� �ְ� ����