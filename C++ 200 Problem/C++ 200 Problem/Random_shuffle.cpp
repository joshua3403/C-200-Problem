#include "pch.h"
#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
	string str1 = "1a2n3ndnawer345tg";
	string str2 = "Republic of Korea";
	int data[10] = { 1, 2, 3,4, 5, 6, 7, 8, 9, 10 };

	srand(static_cast<unsigned int>(time(NULL)));

	random_shuffle(str1.begin(), str1.end());
	random_shuffle(str2.begin(), str2.end());
	random_shuffle(data, data + 4);

	cout << "== str1 ==" << endl;
	for (auto i : str1)
	{
		cout << i << " ";
	}

	cout << endl << "== str2 ==" << endl;
	for (auto i : str2)
		cout << i << " ";

	cout << endl << "== data ==" << endl;
	for (auto i : data)
		cout << i << " ";

	return 0;
}

// ���ڿ��� ���ġ �Ѵ�. �Ķ���ͷ� ���ϴ� ���ڿ��� ������ġ�� �� ��ġ�� �޴´�.


