#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
		name_ = "���� ���� ��Ȳ";
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

	cout << king_info.GetName() << endl;

	return 0;
}

// �����ڴ� Ŭ���� ��ü�� ������� �� �ڵ����� ȣ��ȴ�. ������ �̸��� Ŭ���� �̸��� �����ϸ� ���ϰ��� ���ڴ� ���� ����, ���� ���� �ִ�.