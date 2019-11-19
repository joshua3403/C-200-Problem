#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	ifstream stream;
	stream.open("C:\\BOOTNXT");

	if (stream.good() == true)
		cout << "파일이 존재합니다." << endl;
	else
		cout << "파일이 없습니다." << endl;

	stream.close();

	return 0;
}

// ifstream 객체를 생성하고 파일을 오픈한다.
// 만약 open 함수에 인자로 사용된 파일 경로가 옳다면 ifstream은 정상적으로 파일이 열렸다는 내부 상태 값을 갖게 될 것이다.
// 하지만 파일이 존재하지 않는다면 파일 오픈 과정에서 내부 오류가 발생했을 것이다.
// good 함수를 호출했을 때, 파일이 정상적으로 오픈 되었다면 true, 그렇지 않다면 false가 반환된다.