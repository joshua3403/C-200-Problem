#include "pch.h"
#include <iostream>

using namespace std;

int main()
{

	double x = 1.2345;
	double div = 0.0;
	double mod = 0.0;

	mod = modf(x, &div);

	cout << "1.2345�� �� : " << div << ", ������ : " << mod << endl;

	return 0;
}

// modf �Լ� ��ȯ���� ������ �Ҽ��̸�, modf �Լ� ���ڷ� ���޵Ǵ� �� ��° �������� ���� ���� ����ȴ�.
// div ������ �ּҸ� �ѱ�� ������ �ش� �Լ����� ���� �����ϸ� �Լ� ȣ�� ���� �ۿ����� ���� ��ȿ�ϰ� �ȴ�.

