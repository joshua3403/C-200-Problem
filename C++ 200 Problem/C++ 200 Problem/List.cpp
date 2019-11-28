#include "pch.h"
#include <iostream>
#include <list>

using namespace std;

void Print(const list<int> &data)
{
	cout << "== Print ==" << endl;

	for (auto iter = data.begin(); iter != data.end(); ++iter)
	{
		cout << *iter << ", ";
	}

	cout << endl;
}

int main()
{
	list<int> data1({ 1,2,3,2 });
	data1.push_back(3);
	data1.sort();

	Print(data1);

	data1.unique();

	Print(data1);

	list<int> data2 = { 4,5,6 };
	data2.merge(data1);

	Print(data2);

	return 0;
}

// list는 vector와 기본 구조가 다르기 때문에 at(i), operator[]와 같은 랜덤 엑세스를 지원하지 않는다.
// list는 이중 링크드 리스트로 구현되어 있으며 삽입, 삭제가 빠르다는 장점이 있다.
// 반면, 특정 원소에 접근하지 못하고, 컨테이너 요소에 접근하려면 반드시 반복자를 이용해야한다.