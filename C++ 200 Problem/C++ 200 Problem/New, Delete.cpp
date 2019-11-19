#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Info 
{
public:
	Info() 
	{
		data = new int;
		data_arr = new int[3];
	}
	~Info() 
	{
		delete data;
		delete[] data_arr;
	}

	void Dispose()
	{
		delete data;
		delete[] data_arr;
	}

private:
	int* data;
	int* data_arr;
};

int main()
{
	Info* info = new Info();

	info->Dispose();
	delete info;

	return 0;
}

// 메모리 영역은 크게 스택, 힙, 바이너리 영역으로 분리된다.
// 스택은 변수처럼 컴파일 시점에 크기가 결정되는 요소들이 할당되는 영역이다.
// 바이너리는 static, 전역 요소들이 할당되는 영역이다.
// 힙은 동적으로 메모리가 할당되는 곳이라 지역 변수 등 프로그램 실행 상황에 맞춰 메모리가 할당/해제 되는 공간이다.
// 그리고 변수는 스택에 있을 수도, 힙에 있을 수도 있다.