#include "pch.h"
#include <iostream>

using namespace std;

auto func1 = []() { cout << "Lamda Function" << endl; };
auto func2 = [](int x, int y)->bool {return x < y; };

int main()
{
	int x = 2;
	auto func3 = [=](int y) {
		func1();
		cout << "x < y = " << func2(x, y) << endl;
	};

	func3(4);

	auto func4 = [=](int y) {return x * x + y * y; };

	cout << "x * x + y * y = " << func4(5) << endl;

	return 0;

}

// 함수 람다는 그 쓰임새가 매우 다양하다.
// 람다 소스를 작성하면 그 자리에 인라이닝 효과가 생기며, 함수를 별도로 작성하지 않아도 되기 때문에 코드양이 줄어드는 장점도 있다.
// [캡쳐 블록](파라미터){구성요소}
// 캡쳐 블록 : 람다 함수에서 참조할 변수 목록
// 파라미터 : 람다 함수에서 사용할 인자 목록
// 구성 소스 : 일반 함수처럼 구성할 수 있음
// 캡처 블록과 파라미터는 비어놓을 수 있지만 []와 ()는 생략할 수 없다.
// "->"로 리턴 타입을 지정할 수 있고 생략 가능하다.
// 캡쳐 블록의 =는 유효 영역의 모든 변수에 접근하여 사용할 수 있다는 의미이다.