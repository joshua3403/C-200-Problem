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

// typedef를 알아봤는데, 사실 using 키워드를 이용하는 것이 더 효율적이다.
// typedef는 C++ 코드가 익숙하지 않은 사람들에겐 낯설지만 using은 직관적이라 코드 가독성이 높다.

// typedef나 using이나 사용 방법이 비슷하고 의미하는 바도 비슷하지만 가독성과 확장성 문제 때문에 typedef를 아예 사용하지 말라는 이야기도 있다.
// 무엇이 더욱 효과적이라고 단언하긴 힘들지만, using을 사용하는것이 옳다.
