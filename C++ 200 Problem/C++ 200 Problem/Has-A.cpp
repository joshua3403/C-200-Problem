#include "pch.h"
#include <iostream>

using namespace std;

class Rent
{
public:
	void Payment()
	{
		cout << "�Ӵ�Ḧ �޽��ϴ�." << endl;
	}
};

class Landload : public Rent
{
public:
	void GetMoney()
	{
		cout << "�ǹ��ֶ� ";
		Payment();
	}
};

int main()
{
	Landload master;
	master.GetMoney();

	return 0;
}

// Ŭ���� ��� ���� �� �ϳ��� Has-a ����� ����, ���� ������ �Ѵ�.
// ���� ����ó�� �ǹ��� ������ �ǹ��ִ� �Ӵ�Ḧ �޴´�. �������� Ÿ���ϳ�, �Ӵ�ᰡ �ǹ��ָ� �޴´ٴ� ������ ���� �ʴ�.
// �̷��� �θ� Ŭ������ �ڽ� Ŭ������ ����, �����ϴ� ���踦 Has-a ������ �Ѵ�.
// �ڵ� ���뼺�� ���� ����� ����, ���� ���踦 �����ϴ� ���� �ʿ��ϴ�.