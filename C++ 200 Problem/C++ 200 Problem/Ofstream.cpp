#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const string file_name = "096.txt";

	ofstream file_out;
	file_out.open(file_name, ifstream::out);

	file_out << "고구려 유리왕과 황조가" << endl;
	file_out << "사랑의 아픔을 승화한 시" << endl;

	file_out.close();

	ifstream file_in;
	file_in.open(file_name, ifstream::in);

	string line;
	while (getline(file_in, line))
	{
		cout << line << endl;
	}

	file_in.close();
	
	return 0;
}

// ofstream으로 파일을 여는데 이 시점에 파일이 없다면 새로 생성된다. 만약 파일이 존재하면 기존 내용은 삭제되고 새롭게 파일에 텍스트를 기록한다.
// ifstream::out은 쓰기 모드란 의미이다.
