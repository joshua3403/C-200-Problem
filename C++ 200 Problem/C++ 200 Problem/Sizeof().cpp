#include "pch.h"
#include <iostream>

using namespace std;

class Temp
{
	int no;
	bool is_on;
};

int main()
{
	cout << "char 크기 : " << sizeof('p') << endl;
	cout << "int 크기 : " << sizeof(10) << endl;
	cout << "double 크기 : " << sizeof(10.0) << endl;
	cout << "클래스 크기 : " << sizeof(Temp) << endl;

	return 0;
}

// char는 1바이트, int는 4바이트, double은 8바이트 크기
// 클래스의 크기는 컴퓨터 프로세서의 데이터 버스와 관련이 있다. 데이터 버스는 한번에 4바이트 데이터를 담아 이동한다. 
// 따라서 4바이트 단위로 몇 번 움직이느냐에 따라 sizeof()의 결과가 달라진다.
// 시스템 버스는 CPU, 메모리, 입력 장치, 출력 장치들끼리 데이터를 주고 받을 수 있도록 돕는다.
// 일종의 연결 고리르 하는 버스는 동기식, 비동기식으로 나뉜다.
// 동기식은 속도가 빠르지만 시스템 클럭 주기를 맞추는 과정에서 쓸모없는 시간이 흐르는 단점이 있다.
// 비동기식은 핸드 쉐이크 등으로 속도가 느리다. 반면, 주고 받을 준비만 되면 언제든 송수신이 가능해 시간은 효율적으로 사용 가능하다.
