#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	ifstream stream;
	stream.open("C:\\BOOTNXT");

	if (stream.good() == true)
		cout << "������ �����մϴ�." << endl;
	else
		cout << "������ �����ϴ�." << endl;

	stream.close();

	return 0;
}

// ifstream ��ü�� �����ϰ� ������ �����Ѵ�.
// ���� open �Լ��� ���ڷ� ���� ���� ��ΰ� �Ǵٸ� ifstream�� ���������� ������ ���ȴٴ� ���� ���� ���� ���� �� ���̴�.
// ������ ������ �������� �ʴ´ٸ� ���� ���� �������� ���� ������ �߻����� ���̴�.
// good �Լ��� ȣ������ ��, ������ ���������� ���� �Ǿ��ٸ� true, �׷��� �ʴٸ� false�� ��ȯ�ȴ�.