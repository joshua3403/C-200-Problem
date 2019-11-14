#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int p = 0;
	int n = 0;
	int t = 0;

	for (int i = 0; i < 10; i++)
	{
		p = 0;
		n = 1;

		for (int j = 1; j <= i; j++)
		{
			cout << n << ", ";

			t = n;
			n += p;
			p = t;
		}
		cout << endl;
	}

	return 0;
}


// p는 두 번째 for 문에서 사용될 누적 값ㄹ, n은 콘솔창에 출력되는 시점의 피보나치 값, t는 n 값을 p에 전달하기 위한 임시 변수

