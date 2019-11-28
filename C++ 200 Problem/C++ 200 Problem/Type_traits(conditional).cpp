#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
string TmpFunc(T1 x, T2 y)
{
	typename conditional<is_same< T1, T2>::value, int, double >::type type1;

	return typeid(type1).name();
}

int main()
{
	string type = TmpFunc(1, 22.3);

	if (type == "double")
		cout << "double �ڷ����Դϴ�." << endl;
	else
		cout << "double �ڷ����� �ƴմϴ�." << endl;

	return 0;
}

// template�� �����Ѵ�. 17�� ���ο��� int, double�� ���ڸ� �ѱ�� ������ ���⼭ T1�� int, T2�� double�� �ȴ�.
// 10�� ���ο��� conditional�� ����ϴµ�, ù ��° ���ڿ� true�� �Ҵ�Ǹ� int, false�� �Ҵ�Ǹ� double�� type1�� �ڷ����� �ȴ�.
// ���� �������� �ڷ����� Ư������ �� ���� ��, type_traits�� conditional�̳� ���ø��� ������ ����ϴ� ���� �Ǵ�.