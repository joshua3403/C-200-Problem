#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	cout << "������Ʈ ���� : " << fs::current_path() << endl;

	return 0;
}

// Ư�� �Լ��� Ư�� ���ӽ����̽��� ���ӽ�Ű��, �ش� �Լ��� �ش� ���ӽ����̽��� �������� �����Ѵ�.
// ���� �۾� ���� ������ ����Ѵ�. ������ ���־� ��Ʃ������� ������ ��������(.exe)�� ��ġ�̴�.
