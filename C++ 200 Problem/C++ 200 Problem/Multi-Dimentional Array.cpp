#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int data1[2][2] = { 1,2,3 };
	int data2[2][3] = { {1,} };

	cout << "data1[0][0] = " << data1[0][0] << endl;
	cout << "data1[0][1] = " << data1[0][1] << endl;
	cout << "data1[1][0] = " << data1[1][0] << endl;
	cout << "data1[1][1] = " << data1[1][1] << endl;

	cout << endl;

	cout << "data2[0][0] = " << data2[0][0] << endl;
	cout << "data2[0][1] = " << data2[0][1] + 1 << endl;
	cout << "data2[0][2] = " << data2[0][2] + 2<< endl;
	cout << "data2[1][0] = " << data2[1][0] + 3<< endl;
	cout << "data2[1][1] = " << data2[1][1] + 4<< endl;
	cout << "data2[1][2] = " << data2[1][2] + 5<< endl;

	return 0;
}

// 배열을 인자로 사용할 때 2가지 방법이 있는데, 하나는 int *arr와 int arr[]가 있다. 둘다 똑같이 포인터로 처리하기 때문에 함수 내부에서 사용하는 방법또한 같다.
// 모두 call by reference이므로 함수 내부에서 원본 값 수정이 가능하다.