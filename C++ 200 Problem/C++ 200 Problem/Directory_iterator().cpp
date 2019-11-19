#include "pch.h"
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	string directory = "C:\\Program Files";

	for (auto& name : fs::directory_iterator(directory))
		cout << name << '\n';

	return 0;
}

// 조회할 폴더 이름을 변수에 설정한다.
// 폴더 경로를 의미하는 백슬래시가 두 번 사용되는데, 백슬래시 한 개는 특수문자로 인식하기 때문에 특수문자가 아닌, 경로를 나타내기 위해 두 개를 겹쳐서 사용한다.
// filesystem의 directory_iterator 함수를 호출한다. 이 함수는 인자로 받는 디렉토리의 처음과 끝을 조회하여 결과를 알려준다.
