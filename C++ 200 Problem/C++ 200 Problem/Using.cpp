#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

namespace MyArea {
	int Plus(int x, int y)
	{
		return x + y;
	}
}

using namespace std;
using namespace MyArea;
using MyVector = vector<int>;

int main()
{
	MyVector data;
	data.push_back(1);
	data.push_back(2);

	cout << "Data : " << data.at(0) << ", " << data.at(1) << endl;
	cout << "Plus : " << Plus(2, 4);

	return 0;
}

// typedef�� �˾ƺôµ�, ��� using Ű���带 �̿��ϴ� ���� �� ȿ�����̴�.
// typedef�� C++ �ڵ尡 �ͼ����� ���� ����鿡�� �������� using�� �������̶� �ڵ� �������� ����.

// typedef�� using�̳� ��� ����� ����ϰ� �ǹ��ϴ� �ٵ� ��������� �������� Ȯ�强 ���� ������ typedef�� �ƿ� ������� ����� �̾߱⵵ �ִ�.
// ������ ���� ȿ�����̶�� �ܾ��ϱ� ��������, using�� ����ϴ°��� �Ǵ�.
