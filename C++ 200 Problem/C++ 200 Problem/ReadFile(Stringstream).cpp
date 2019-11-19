#include "pch.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{

	ifstream ifs("���ѽô� ���� �±�� ����.txt");

	stringstream ss;

	ss << ifs.rdbuf();
	ifs.close();

	string read = "";

	cout << "== !ss.eof == " << endl;

	while (!ss.eof())
	{
		ss >> read;

		cout << read << " ";
	}

	cout << endl << "== !ss.str() ==" << endl;

	read = ss.str();

	cout << endl << read << endl;
	return 0;
}

// ifstream�� �̿��� �ؽ�Ʈ ������ ����. ���� ��带 �����ϸ� ifstream::in���� �����ȴ�.
// ss�� ifstream���� ���� ������ ��ü �ؽ�Ʈ ������ stringstream�� ����.
// ss�� ����� ���ڿ��� ���������� reaad ���ڿ� ������ �����ϰ� ����Ѵ�.
// ss���� read�� �����ϴ� ���ڿ��� ifs�� ���� ���� �ؽ�Ʈ ������ ��������, ���ӵ� ���ڿ��� �� ������ �����Ѵ�. 
// ����, Ư������ ���� ������ �������� �ؽ�Ʈ�� �� ������ ó���Ѵ�.
// �ؽ�Ʈ ������ ����ϴ� �ٸ� ������� stringstream�� ��� �����͸� ���ڿ��� ��ȯ�Ͽ� string ������ ���� �� �ִ�.
// �� ������ �״�� ����ϸ� �ؽ�Ʈ ���� ������ ��� ��µȴ�.
