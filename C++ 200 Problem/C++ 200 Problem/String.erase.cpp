#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence("i hate coding");

	sentence.erase(0, 7);
	
	cout << "I like " << sentence << endl;

	return 0;
}

// ���ڿ����� erase �Լ��� ȣ���Ͽ� ���ڿ� �Ϻθ� ������ �� �ִ�. 
// �̶� 2���� ���ڰ� �ʿ��ѵ� ù ��°�� ������ ������ ���� �ε�����, �� ��°�� ������ ������ �����̴�.