#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data;
	int number = 0;

	try
	{
		number = data.at(10);
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}

	return 0;
}

// ���� ó���� �ռ� ����ߵ� ���α׷��Ӱ� �ǵ����� �ʰų�, ����ġ ���ߴ� ������ �ذ��ϴµ� ������ �ش�.
// ���� ���� �������� ���������� ����� ���� ���� �ڵ尡 �ۼ��ȴ�.
// ��� ���� �ڵ带 �ϳ��� �ۼ��ϴ� �� ���� ����� �� �ִ�.
// �̷� �� ���ϴ� �κ��� try catch�� ���� �ϰ������� ó���ϴ� ���� ����.
// catch���� ���� ���ڰ� �� �� �ִµ� �⺻�����δ� exception�� ����Ѵ�.