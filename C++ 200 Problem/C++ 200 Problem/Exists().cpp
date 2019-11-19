#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	if (fs::exists("c:\\Target") == true)
		cout << "폴더가 존재합니다." << endl;
	else
		cout << "폴더가 없습니다." << endl;

	return 0;
}

// filesystem 네임스페이스를 이용해 fs를 선언하고 exists 함수를 호출한다.
// 폴더가 존재한다면 true, 존재하지 않는다면 false가 반환된다.
// 같은 방식으로 파일의 존재 여부도 확인 가능하다.
