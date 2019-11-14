#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int PointerFunc(vector<string> *info)
{
	if (info->empty() == true)
		return 0;
	else
		return sizeof(info);
}

int main()
{
	vector<string> message;
	message.push_back("고려 장군");
	message.push_back("척준경!");
	message.push_back("절친 이름은");
	message.push_back("... 무엇일까?");

	cout << "포인터 인자 크기 : " << PointerFunc(&message) << endl;
	cout << "원래 변수 크기 : " << sizeof(message) << endl;

	return 0;
}

// 포인터를 사용하면 프로그램 전체 성능을 올리는데 도움이 되기도 한다.
// 인자의 크기가 클수록 포인ㅇ터를 이용하여 4바이트의 주소만 넘기는 것이 좋다.
// message 벡터에는 4개의 string이 담겨져있고 각 4바이트씩 총 크기는 16바이트다.
// 하지만 포인터 인자 크기는 4바이트로 차이가 있음을 확인할 수 있다.