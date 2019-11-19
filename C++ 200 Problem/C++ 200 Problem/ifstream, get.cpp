#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	ifstream read;

	read.open("093.txt", ifstream::in);

	char line = read.get();

	while (read.eof() == false)
	{
		cout << line;

		line = read.get();
	}

	cout << endl;

	read.close();

	return 0;
}

// 구조체와 구조체 변수를 보유하는 구조체를 선언한다.
// 구조체 변수가 선언된 순서에 맞춰 값을 대입하면 된다.
