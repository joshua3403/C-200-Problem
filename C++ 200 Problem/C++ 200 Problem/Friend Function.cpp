#include "pch.h"
#include <iostream>

using namespace std;

class Ondal
{
public:
	friend void GetYear(Ondal ondal)
	{
		cout << "�ƴܼ� ���� ���� : " << ondal.year_ << endl;
	}

	void SetYear(int year)
	{
		year_ = year;
	}

private :
	int year_;
};

int main()
{
	Ondal ondal;
	ondal.SetYear(590);

	GetYear(ondal);

	return 0;
}

// friend Ű���带 �̿��ϸ� ������ ������ Ŭ������ ������ �� �ִ�.
// �ܺ��� ��� ������ ����ϴ� friend Ű����� �ſ� ���������� ����ϰų� �ƿ� ������� �ʴ� ���� ����.
// ���� ����ó�� ���� ���� ����̱� ������ ������� �ʴ� ���� �����Ѵ�.
// ��ü���� ����� Ư�� �� �ϳ��� ���������� ���߸��� friend Ű����� �ռ� ����ó�� Ŭ������ ������ �� �ְ�, �ϳ��� �Լ����� ������ ���� �ִ�.