#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data({ 1,2,3 });

	for (vector<int>::iterator iter = data.begin(); iter != data.end(); ++iter)
		cout << *iter << ", ";

	for (auto iter = data.cbegin(); iter != data.cend(); ++iter)
		cout << *iter << ", ";

	for (auto iter = data.rbegin(); iter != data.rend(); ++iter)
		cout << *iter << ", ";

	data.clear();

	return 0;
}

// 반복자는 컨테이너의 위치를 가리키는 것으로 포인터와 비슷하다.
// 반복자를 사용할 땐 전위보다 후위를 사용하자.
// 후위 처리 속도가 더 빠르기 때문인데, 전위 증가를 사용하면 새로운 객체를 반환하지만, 후위 증가를 사용하면 이전 객체를 참조해 사용할 수 있기 때문이다.
// cbegin, cend에서 c의 의미는 const이며 반복자를 통해 값을 수정 할 수 없도록 설정 할 수도 있다.
