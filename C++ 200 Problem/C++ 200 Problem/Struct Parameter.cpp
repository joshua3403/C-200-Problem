#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Princess
{
	string name;
	string father;
	string birthday;

} jungso;

void Print(Princess *who)
{
	cout << "jungso.name = " << who->name << endl;
	cout << "jungso.father = " << who->father << endl;
	cout << "jungso.birthday = " << who->birthday << endl;
}

int main()
{
	jungso.name = "���Ұ���";
	jungso.father = "���� ����";
	jungso.birthday = "1412��";

	Print(&jungso);

	return 0;
}

// ������ call by reference�� �򰥸���.
// Print�Լ��� ����ü �����͸� ���ڷ� �޴µ� �̶� ȣ���Ҷ��� ����� �ּҸ� �Ѱ���� �ϰ� �޴� �ʿ����� �����͸� �޴´�.
// �̶� ������ ũ�� 4����Ʈ�� �Ѿ��.
