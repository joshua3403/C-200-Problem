#include "pch.h"
#include <iostream>

using namespace std;

void Print(int *arr)
{
	cout << "== Print1 ==" << endl;
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

	arr[1] = 1000;
}

void Print2(int arr[])
{
	cout << "== Print2 ==" << endl;
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

	arr[2] = 2000;
}

int main()
{
	int data[3] = { 0,1,2 };

	Print(data);
	Print2(data);
	cout << "== 결과 == " << endl;

	cout << data[0] << ", " << data[1] << ", " << data[2] << endl;

	return 0;
}

// 배열을 인자로 사용할 때 2가지 방법이 있는데, 하나는 int *arr와 int arr[]가 있다. 둘다 똑같이 포인터로 처리하기 때문에 함수 내부에서 사용하는 방법또한 같다.
// 모두 call by reference이므로 함수 내부에서 원본 값 수정이 가능하다.