#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence("I like coding!");
	string find_str("coding");
	string replace_str("history");

	sentence.replace(sentence.find(find_str), find_str.length(), replace_str);

	cout << sentence << endl;
	

	return 0;
}

// ���ڿ��� ��ü�� ���� replace �Լ��� ����Ѵ�.
// ù ��° ���ڷ� sentence.find()�� ���, ���ϴ� ���ڿ��� ã�� �� ��ġ�� �˾Ƴ���.
// �� ��° ���ڷ� ã�ƾ� �� ���ڿ��� ���̸� replace �Լ��� �˷��ش�.
// �� ��° ���ڷ� ��ü�� ���ο� ���ڿ��� �ִ´�.