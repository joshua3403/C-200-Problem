#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string king = "���� ����";
	string favorite1("���");
	string favorite2("�߱�");

	string king_info("");

	king_info += king;
	king_info += "�� ";
	king_info += favorite1;
	king_info.append("�� ");
	king_info.append(favorite2);
	king_info.append("�� �����߽��ϴ�.");

	cout << king_info << endl;

	return 0;
}

// string + �����ڸ� �̿��ϸ� string, char, const char *�� ���� �߰��� �� �ִ�. string�� ���� ���۸� ������ �����Ƿ� ���� ���� ���ڿ� ó���� �����ϴ�.
// ����, append, insert, push_back �Լ��ε� ���� �Ǵ� ���ڿ��� �߰��� �� �ִ�.