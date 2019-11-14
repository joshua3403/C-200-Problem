#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string silla = "divided into the Three kingdoms.";
	string joseon = "Yi Seong-gye, established Joseon in 1392.";

	transform(silla.begin(), silla.end(), silla.begin(), toupper);
	transform(joseon.begin(), joseon.end(), joseon.begin(), tolower);

	char lower_ch = 'g';
	char upper_ch = 'B';

	lower_ch = toupper(lower_ch);
	upper_ch = tolower(upper_ch);

	cout << "���ڿ� �빮�ڷ� ��ȯ : " << silla << endl;
	cout << "���ڿ� �ҹ��ڷ� ��ȯ : " << joseon << endl;
	cout << "���� �빮�ڷ� ��ȯ : " << lower_ch << endl;
	cout << "���� �ҹ��ڷ� ��ȯ : " << upper_ch << endl;

	return 0;
}

// ���ڿ� ��ü�� �빮�ڳ� �ҹ��ڷ� ��ȯ�ϴ� transform�Լ��� �̿�����
// transform �Լ� ���� ���� ���� : 1. ������ ���ڿ��� ������ 2. ������ ���ڿ��� ������ 3. ����� ���ڿ��� ������(�ٸ� ���ڿ� ������ ������ �� ����) 4. �빮�ڷ� ��ȯ�Ϸ��� toupper, �ҹ��ڷ� ��ȯ�Ϸ��� tolower ���