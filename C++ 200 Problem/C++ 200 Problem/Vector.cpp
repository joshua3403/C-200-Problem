#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data;

	data.assign(5, 100);

	for (auto i = 0; i < data.size(); i++)
	{
		cout << "data " << i << " : " << data.at(i) << endl;
	}

	data.front() = 1;
	data.back() = 2;

	if (data.empty())
		cout << "���Ͱ� ��� �ֽ��ϴ�." << endl;
	else
	{
		for(auto i = 0; i < data.size(); i++)
			cout << "data " << i << " : " << data.at(i) << endl;
	}


	return 0;
}