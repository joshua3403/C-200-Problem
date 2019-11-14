#include "pch.h"
#include <iostream>

using namespace std;

class Temp
{
	int no;
	bool is_on;
};

int main()
{
	cout << "char ũ�� : " << sizeof('p') << endl;
	cout << "int ũ�� : " << sizeof(10) << endl;
	cout << "double ũ�� : " << sizeof(10.0) << endl;
	cout << "Ŭ���� ũ�� : " << sizeof(Temp) << endl;

	return 0;
}

// char�� 1����Ʈ, int�� 4����Ʈ, double�� 8����Ʈ ũ��
// Ŭ������ ũ��� ��ǻ�� ���μ����� ������ ������ ������ �ִ�. ������ ������ �ѹ��� 4����Ʈ �����͸� ��� �̵��Ѵ�. 
// ���� 4����Ʈ ������ �� �� �����̴��Ŀ� ���� sizeof()�� ����� �޶�����.
// �ý��� ������ CPU, �޸�, �Է� ��ġ, ��� ��ġ�鳢�� �����͸� �ְ� ���� �� �ֵ��� ���´�.
// ������ ���� ������ �ϴ� ������ �����, �񵿱������ ������.
// ������� �ӵ��� �������� �ý��� Ŭ�� �ֱ⸦ ���ߴ� �������� ������� �ð��� �帣�� ������ �ִ�.
// �񵿱���� �ڵ� ����ũ ������ �ӵ��� ������. �ݸ�, �ְ� ���� �غ� �Ǹ� ������ �ۼ����� ������ �ð��� ȿ�������� ��� �����ϴ�.