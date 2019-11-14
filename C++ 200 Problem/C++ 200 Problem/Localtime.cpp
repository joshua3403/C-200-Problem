#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t now = time(NULL);
	tm ptm;
	localtime_s(&ptm, &now);

	char buffer[64];
	strftime(buffer, 64, "예제 만드는 지금은 %Y년 %m월 %d일, %H시 %M분 %S초입니다.(%p)\n", &ptm);

	cout << buffer;
	
	return 0;
}

// 날짜와 시간을 얻을 수 있는 time_t변수.
// tm은 구조체로 localtime_s 함수를 이용해 int 날짜와 시간 값을 대입한다.
// strftime은 3번째 인자의 문자열을 2번째 인자의 크기만큼 1번째 배열에 할당하는 역할.