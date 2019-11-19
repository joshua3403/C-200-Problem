#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Info 
{
public:
	Info() 
	{
		data = new int;
		data_arr = new int[3];
	}
	~Info() 
	{
		delete data;
		delete[] data_arr;
	}

	void Dispose()
	{
		delete data;
		delete[] data_arr;
	}

private:
	int* data;
	int* data_arr;
};

int main()
{
	Info* info = new Info();

	info->Dispose();
	delete info;

	return 0;
}

// �޸� ������ ũ�� ����, ��, ���̳ʸ� �������� �и��ȴ�.
// ������ ����ó�� ������ ������ ũ�Ⱑ �����Ǵ� ��ҵ��� �Ҵ�Ǵ� �����̴�.
// ���̳ʸ��� static, ���� ��ҵ��� �Ҵ�Ǵ� �����̴�.
// ���� �������� �޸𸮰� �Ҵ�Ǵ� ���̶� ���� ���� �� ���α׷� ���� ��Ȳ�� ���� �޸𸮰� �Ҵ�/���� �Ǵ� �����̴�.
// �׸��� ������ ���ÿ� ���� ����, ���� ���� ���� �ִ�.