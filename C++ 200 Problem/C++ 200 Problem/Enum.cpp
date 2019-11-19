#include "pch.h"
#include <iostream>

using namespace std;

enum Status
{
	normal = 0,
	abnormal,
	disconnect = 100,
	close
};

int main()
{
	Status number = close;

	if (number == Status::normal)
		cout << "Status : normal" << endl;
	else if (number == abnormal)
		cout << "Status : abnormal" << endl;
	else if (number == 101)
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	return 0;
}

// enum의 요소들은 정수형 값을 갖는다. 각 요소는 이전 요소의 요소보다 1이 커진다.
// 처음 요소는 0이다.