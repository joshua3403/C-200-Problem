#include "pch.h"
#include <iostream>

using namespace std;

enum State
{
	kOpen,
	kClose,
	kDisconnect
};

typedef State state_;

struct Status
{
	state_ machine1;
	state_ machine2;
} status_;

int main()
{
	status_.machine1 = kOpen;
	status_.machine2 = kDisconnect;

	cout << "상태 : " << status_.machine1 << endl;
	cout << "상태 : " << status_.machine2 << endl;

	return 0;
}

// typedef는 원하는 형태로 별명을 주어 사용할 수 있다.
// 이미 정의된 자료형에 다른 이름을 부여할 수 있으며, 기존 자료형과 새로 정의된 이름은 똑같이 취급된다.