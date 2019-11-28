#include "pch.h"
#include <iostream>
#include <list>

using namespace std;

using iList = list<int>;

int main()
{
	iList data1;
	iList data2({ 3,4,5 });

	data1.push_back(2);
	data2.push_back(7);

	data1.merge(data2);

	cout << "== List Merge ==" << endl;
	for (auto it = data1.begin(); it != data1.end(); ++it)
		cout << ' ' << *it;

	cout << endl;

	data2 = { 3,4,5 };

	data1.splice(data1.begin(), data2);

	cout << "== List Splice ==" << endl;
	for (auto it = data1.begin(); it != data1.end(); ++it)
		cout << ' ' << *it;

	cout << endl;

	return 0;

}
// merge 함수를 이용하여 두 list를 합친다.
// merge 함수는 2개의 특징이 있는데, 합칠 때 자동 오름차순 정렬이 된다는 것이고,
// 다른 하나는 인자로 사용되는 컨테이너가 merge이후 데이터가 삭제된다는 것이다.
// splice 함수는 이어 붙인다는 것이다.