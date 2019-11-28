#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> data({ 10,20,30,40 });

	cout << "== for_each 람다 ==" << endl;

	for_each(data.begin(), data.end(), [](int i) { cout << i << ","; });

	cout << endl << "== for_each 람다 함수1 == " << endl;

	auto Print = [](int x) { cout << x + x << ", "; };

	for_each(data.begin(), data.end(), Print);

	cout << endl << "== for_each 람다 함수2 ==" << endl;

	int y = 11;

	for_each(data.begin(), data.end(), [y](int x) {cout << x + y << ", "; });

	cout << endl;

	return 0;
}

// for_each는 C++ 표준에 포함되어있다. for_each는 사용방법이 다양하다.
// 배열 범위를 인자로 사용하며, 추가로 컨테이너와 람다 문법을 사용할 수 있다.
// 일반적으로 람다로 구현할 코드양이 적다면 26번 라인처럼 선언과 함께 구현 코드를 함께 적는 것이 가독성 측면에서 유리하다. 