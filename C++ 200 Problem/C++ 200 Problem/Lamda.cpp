#include "pch.h"
#include <iostream>

using namespace std;

auto func1 = []() { cout << "Lamda Function" << endl; };
auto func2 = [](int x, int y)->bool {return x < y; };

int main()
{
	int x = 2;
	auto func3 = [=](int y) {
		func1();
		cout << "x < y = " << func2(x, y) << endl;
	};

	func3(4);

	auto func4 = [=](int y) {return x * x + y * y; };

	cout << "x * x + y * y = " << func4(5) << endl;

	return 0;

}

// �Լ� ���ٴ� �� ���ӻ��� �ſ� �پ��ϴ�.
// ���� �ҽ��� �ۼ��ϸ� �� �ڸ��� �ζ��̴� ȿ���� �����, �Լ��� ������ �ۼ����� �ʾƵ� �Ǳ� ������ �ڵ���� �پ��� ������ �ִ�.
// [ĸ�� ����](�Ķ����){�������}
// ĸ�� ���� : ���� �Լ����� ������ ���� ���
// �Ķ���� : ���� �Լ����� ����� ���� ���
// ���� �ҽ� : �Ϲ� �Լ�ó�� ������ �� ����
// ĸó ���ϰ� �Ķ���ʹ� ������ �� ������ []�� ()�� ������ �� ����.
// "->"�� ���� Ÿ���� ������ �� �ְ� ���� �����ϴ�.
// ĸ�� ������ =�� ��ȿ ������ ��� ������ �����Ͽ� ����� �� �ִٴ� �ǹ��̴�.