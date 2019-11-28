#include "pch.h"
#include <string>
#include <iostream>
#include <tuple>

using namespace std;

int main()
{
	typedef tuple<string, int, double> Data;

	Data data1("���ڿ�", 10, 1.2);

	string my_str = "";
	int my_int = 0;
	tie(my_str, my_int, ignore) = data1;

	cout << my_str << ", " << my_int << endl;

	return 0;
}

// tie �Լ��� �����ϸ� my_str, my_int, ignore�� ���ڷ� �����Ѵ�. 
// my_str�� Ʃ���� ù ��° �������� "���ڿ�"�� ����ǰ�, my_int���� �� ��° ������ int 10�� ����ȴ�.
// ignore�� ���� �������� ���� �� �Է��Ѵ�.