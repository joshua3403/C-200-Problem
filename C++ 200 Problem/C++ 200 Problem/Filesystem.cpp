#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	fs::create_directory("temp");
	fs::copy("temp", "temp_copy");
	fs::remove("temp");
	fs::remove("temp_copy");

	return 0;
}

// temp �̸��� ������ �����Ѵ�. ������ ��θ� �������� ���� ��� ������Ʈ ������ temp ������ �����ȴ�.
// temp ������ temp_copy�� ������ �����Ѵ�. ���������� temp_copy�� ������ ��θ� �������� ������ ������Ʈ ������ �����ȴ�.
// temp ������ temp_copy ������ �����Ѵ�.