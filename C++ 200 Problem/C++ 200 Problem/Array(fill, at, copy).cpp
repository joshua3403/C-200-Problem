#include "pch.h"
#include <iostream>
#include <array>

using namespace std;

void Print(const array<int, 3>& data)
{
	cout << "== Print ==" << endl;

	for (auto iter = data.begin(); iter != data.end(); ++iter)
		cout << *iter << ", ";

	cout << endl;
}

int main()
{
	array<int, 3> data1{ 10,2,5 };
	array<int, 3> data2;
	data2.fill(0);
	data2.at(1) = 200;

	Print(data2);

	copy(data1.begin(), data1.end(), data2.begin());

	Print(data1);
	Print(data2);

	return 0;
}

// array는 vector와 사용 방법이 비슷하지만 크기가 고정되어 있다는 차이점이 있다.
// fill은 array 전체를 특정 값으로 설정 할 때 사용한다.
// at은 랜덤 엑세스를 위해 사용한다.
// copy 함수를 이용해 array를 복사한다.