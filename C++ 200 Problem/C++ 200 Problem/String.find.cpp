#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	string baekhap_war = "���չ� ���� : ���� ���� �ο�â�� �ϱ���� ������ ����.";
	
	int rtn = baekhap_war.find("�ο�â");

	if (rtn > 0)
		cout << "���ڿ��� ã�ҽ��ϴ�. ��ġ�� " << baekhap_war.at(rtn) << "�Դϴ�.\n";
	else
		cout << "���ڿ��� ã�� �� �����ϴ�.\n";

	return 0;
}

// ���ڿ� �ڿ� find �Լ��� ȣ���Ͽ� ã���� �ϴ� ������ ���ڿ��� �Է��Ѵ�.
// ���� ã�� ���ϸ� -1(string::npos)��, ã������ �ش� ������ ��ġ���� �����Ѵ�.