#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	cout << "프로젝트 폴더 : " << fs::current_path() << endl;

	return 0;
}

// 특정 함수를 특정 네임스페이스에 종속시키면, 해당 함수는 해당 네임스페이스의 집합으로 존재한다.
// 현재 작업 중인 폴더를 출력한다. 기준은 비주얼 스튜디오에서 빌드한 실행파일(.exe)의 위치이다.
