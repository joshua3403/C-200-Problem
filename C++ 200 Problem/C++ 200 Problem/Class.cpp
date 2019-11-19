#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	void SetName(string name)
	{
		name_ = name;
	}

	string GetName()
	{
		return name_;
	}

private:
	string name_;
};

int main()
{
	KingInfo king_info;
	king_info.SetName("���� ���� ����");

	cout << king_info.GetName() << endl;

	return 0;
}

// Ŭ������ �������� �и��� ������ �����̶� �� �� �ִ�.
// ������ ��ҵ��� �ϳ��� ������ �̸��� Ŭ������ �θ� ���� �ִ� ���̴�.
// ������ ȸ���� �����ϸ� �ȴ�.
// ȸ�翡�� �پ��� ������ �ֱ� ������ ������ ȸ����� �ϳ��� ��ü��� �����ϸ� �ȴ�.
// ���� ������
// Public : ������ ����, �ܺ� ���� ���.
// Protected : ���ѵ� ����, �ش� Ŭ������ ���� Ŭ���������� ���� ���.
// Private : ���ѵ� ����, �ش� Ŭ���������� ���� ���.