#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	if (fs::exists("c:\\Target") == true)
		cout << "������ �����մϴ�." << endl;
	else
		cout << "������ �����ϴ�." << endl;

	return 0;
}

// filesystem ���ӽ����̽��� �̿��� fs�� �����ϰ� exists �Լ��� ȣ���Ѵ�.
// ������ �����Ѵٸ� true, �������� �ʴ´ٸ� false�� ��ȯ�ȴ�.
// ���� ������� ������ ���� ���ε� Ȯ�� �����ϴ�.
