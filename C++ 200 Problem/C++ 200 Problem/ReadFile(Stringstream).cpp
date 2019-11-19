#include "pch.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{

	ifstream ifs("삼한시대 마한 태기왕 전설.txt");

	stringstream ss;

	ss << ifs.rdbuf();
	ifs.close();

	string read = "";

	cout << "== !ss.eof == " << endl;

	while (!ss.eof())
	{
		ss >> read;

		cout << read << " ";
	}

	cout << endl << "== !ss.str() ==" << endl;

	read = ss.str();

	cout << endl << read << endl;
	return 0;
}

// ifstream을 이용해 텍스트 파일을 연다. 파일 모드를 생략하면 ifstream::in으로 설정된다.
// ss에 ifstream으로 열은 파일의 전체 텍스트 내용을 stringstream에 저장.
// ss에 저장된 문자열을 순차적으로 reaad 문자열 변수에 저장하고 출력한다.
// ss에서 read로 전달하는 문자열은 ifs를 통해 읽은 텍스트 문서의 내용으로, 연속된 문자열을 한 단위로 저장한다. 
// 띄어쓰기, 특수문자 등을 만나기 전까지의 텍스트를 한 단위로 처리한다.
// 텍스트 내용을 출력하는 다른 방법으로 stringstream의 모든 데이터를 문자열로 변환하여 string 변수에 담을 수 있다.
// 이 변수를 그대로 출력하면 텍스트 문서 내용이 모두 출력된다.
