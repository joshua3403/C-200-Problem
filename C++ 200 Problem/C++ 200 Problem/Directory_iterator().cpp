#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	string directory = "C:\\Program Files";

	for (auto& name : fs::directory_iterator(directory))
		cout << name << '\n';

	return 0;
}

// ��ȸ�� ���� �̸��� ������ �����Ѵ�.
// ���� ��θ� �ǹ��ϴ� �齽���ð� �� �� ���Ǵµ�, �齽���� �� ���� Ư�����ڷ� �ν��ϱ� ������ Ư�����ڰ� �ƴ�, ��θ� ��Ÿ���� ���� �� ���� ���ļ� ����Ѵ�.
// filesystem�� directory_iterator �Լ��� ȣ���Ѵ�. �� �Լ��� ���ڷ� �޴� ���丮�� ó���� ���� ��ȸ�Ͽ� ����� �˷��ش�.
