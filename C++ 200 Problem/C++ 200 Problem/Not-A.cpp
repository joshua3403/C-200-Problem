#include "pch.h"
#include <iostream>

using namespace std;

class Landload
{
public:
	void IamLandload()
	{
		cout << "�ǹ��� �Դϴ�." << endl;
	}
};

class MaleMonkey
{
public:
	void Favorite()
	{
		cout << "Favorite : Female Monkey" << endl;
	}
};

class Nation : public Landload, public MaleMonkey
{
public:
	void Who()
	{
		IamLandload();
	}
};

int main()
{
	Nation nation;
	nation.Who();

	return 0;
}

// ���� �� ���谡 ��·�� ��ȣ �������� ��Ҹ� ��Ÿ���ٸ�, Not-A ����� ��, ���������� ���� ���� ���踦 ���Ѵ�.
// �̶� "���� �ʴ�"�� ���� �� Ŭ����, �Ǵ� �� ����, �Ǵ� �� ���� ���� �ȿ� ���� ��︮�� �ʴ� Ŭ������ �ҽ� ������ �ִٴ� ���̴�.
// �� ���� �ҽ��� ���� MaleMonkey Ŭ������ Landload, Nation Ŭ������ �ƹ��� �������� ����.
// ��ü������ ���� ������ �����ϴµ� ���� ��긮�� �ʴ� �κ��� �ִٸ� ���α׷� ��ü ���迡 ���� ������ �߻��ߴٴ� ���̱⵵ �ϴ�.