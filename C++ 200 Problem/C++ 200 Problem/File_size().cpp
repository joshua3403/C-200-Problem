#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	int size = fs::file_size("�������� ����.txt");

	cout << "���� ũ�� : " << size << "����Ʈ" << endl;

	return 0;
}

// temp �̸��� ������ �����Ѵ�. ������ ��θ� �������� ���� ��� ������Ʈ ������ temp ������ �����ȴ�.
// temp ������ temp_copy�� ������ �����Ѵ�. ���������� temp_copy�� ������ ��θ� �������� ������ ������Ʈ ������ �����ȴ�.
// temp ������ temp_copy ������ �����Ѵ�.