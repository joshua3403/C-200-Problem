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

// 생성자 옆에는 default 키워드가 있는데 이것은 클래스 내부 변수를 모두 초기화한다는 의미이다.
// default 키워드 사용 방법은 다양하며, 클래스 생성자에도 응용 할 수 있다.