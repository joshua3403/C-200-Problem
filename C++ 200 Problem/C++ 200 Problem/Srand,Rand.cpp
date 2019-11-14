#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{

	srand(static_cast<unsigned int>(time(NULL)));

	for (int i = 0; i < 5; i++)
	{
		cout << "난수 : " << rand() << endl;
	}
	return 0;
}

// 난수를 구할 땐 해당 정보를 프로그램 안에서 한 번은 초기화해야 한다. 이때 난수를 구하기 위해선 씨앗(seed)라 불리는 값이 필요한데 보통은 시스템 시간을 이용한다.
// 씨앗을 기준으로 무작위 값을 생성하기 때문에 씨앗은 계속 바뀌어야 한다. 그렇지 않다면 난수임에도 항상 같은 결과가 출력된다.
// rand 함수를 이용해 임의의 값을 얻으며 범위는 0~32767이다.
// 하지만 rand는 진정한 의미의 난수를 생성하지 않는다.

