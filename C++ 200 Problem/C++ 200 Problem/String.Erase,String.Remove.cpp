#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string sentence("I like coding!");

	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());

	cout << sentence << endl;

	return 0;
}

// ���ڿ����� Ư�� ���ڸ� ������ ������ �پ��� ����� ������, erase�� remove �Լ��� �Բ� ����Ѵ�.
// erase�Լ��� ù ��° ���ڷ� remove �Լ��� ȣ��Ǿ��µ�, �� �Լ��� Ư�� ���ڰ� �ִ� ��� �ε����� erase �Լ��� �˷��ش�.
// ���ڿ��� ���ۿ��� ������ ��ġ���� ��ȸ�ϸ� ���ϴ� ������ ��ġ�� erase �Լ��� �����ϴ� ���̴�.