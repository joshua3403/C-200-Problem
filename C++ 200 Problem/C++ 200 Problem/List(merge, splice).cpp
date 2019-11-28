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
// merge �Լ��� �̿��Ͽ� �� list�� ��ģ��.
// merge �Լ��� 2���� Ư¡�� �ִµ�, ��ĥ �� �ڵ� �������� ������ �ȴٴ� ���̰�,
// �ٸ� �ϳ��� ���ڷ� ���Ǵ� �����̳ʰ� merge���� �����Ͱ� �����ȴٴ� ���̴�.
// splice �Լ��� �̾� ���δٴ� ���̴�.