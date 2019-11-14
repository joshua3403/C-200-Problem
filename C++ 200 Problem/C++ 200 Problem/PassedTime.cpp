#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t start = time(NULL);
	time_t finish = time(NULL);

	int pass_int = 1;

	time(&start);

	for (int i = 1; i < 100000; i++)
	{
		for (int j = 1; j < 100000; j++)
			pass_int += 1;
	}

	time(&finish);

	cout << "1을 100억 번 더하는 시간 : " << difftime(finish, start) << "초\n";

	return 0;
}

// time(&start)의 경우 이 시점의 시간이 start에 할당된다.
// difftime()은 첫번째 파라미터 시간에서 두번째 파라미터 시간을 뺀 경과 시간을 반환한다.