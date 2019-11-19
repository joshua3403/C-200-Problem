#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Class1
{
public:
	Class1() = default;

public:
	int number;
	double prime;
	string word;
};

class Class2
{
public :
	Class2() {};

public:
	int number;
	string word;
	double prime;
};

int main()
{
	Class1 *class1 = new Class1();
	cout << "Class1 : " << class1->number << ", " << class1->prime << ", " << class1->word << endl;

	Class2 *class2 = new Class2();
	cout << "Class1 : " << class2->number << ", " << class2->prime << ", " << class2->word << endl;

	return 0;
}

// ������ ������ default Ű���尡 �ִµ� �̰��� Ŭ���� ���� ������ ��� �ʱ�ȭ�Ѵٴ� �ǹ��̴�.
// default Ű���� ��� ����� �پ��ϸ�, Ŭ���� �����ڿ��� ���� �� �� �ִ�.