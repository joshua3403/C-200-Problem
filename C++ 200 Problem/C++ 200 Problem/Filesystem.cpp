#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	fs::create_directory("temp");
	fs::copy("temp", "temp_copy");
	fs::remove("temp");
	fs::remove("temp_copy");

	return 0;
}

// temp 이름의 폴더를 생성한다. 별도의 경로를 지정하지 않을 경우 프로젝트 폴더에 temp 폴더가 생성된다.
// temp 폴더를 temp_copy란 폴더로 복사한다. 마찬가지로 temp_copy도 별도의 경로를 지정하지 않으면 프로젝트 폴더에 생성된다.
// temp 폴더와 temp_copy 폴더를 삭제한다.