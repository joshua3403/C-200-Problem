#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int PointerFunc(vector<string> *info)
{
	if (info->empty() == true)
		return 0;
	else
		return sizeof(info);
}

int main()
{
	vector<string> message;
	message.push_back("��� �屺");
	message.push_back("ô�ذ�!");
	message.push_back("��ģ �̸���");
	message.push_back("... �����ϱ�?");

	cout << "������ ���� ũ�� : " << PointerFunc(&message) << endl;
	cout << "���� ���� ũ�� : " << sizeof(message) << endl;

	return 0;
}

// �����͸� ����ϸ� ���α׷� ��ü ������ �ø��µ� ������ �Ǳ⵵ �Ѵ�.
// ������ ũ�Ⱑ Ŭ���� ���Τ��͸� �̿��Ͽ� 4����Ʈ�� �ּҸ� �ѱ�� ���� ����.
// message ���Ϳ��� 4���� string�� ������ְ� �� 4����Ʈ�� �� ũ��� 16����Ʈ��.
// ������ ������ ���� ũ��� 4����Ʈ�� ���̰� ������ Ȯ���� �� �ִ�.