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
		cout << "double 자료형입니다." << endl;
	else
		cout << "double 자료형이 아닙니다." << endl;

	return 0;
}

// template를 선언한다. 17번 라인에서 int, double로 인자를 넘기기 때문에 여기서 T1은 int, T2는 double이 된다.
// 10번 라인에서 conditional을 사용하는데, 첫 번째 인자에 true가 할당되면 int, false가 할당되면 double이 type1의 자료형이 된다.
// 개발 과정에서 자료형을 특정지을 수 없을 때, type_traits의 conditional이나 템플릿을 적절이 사용하는 것이 옳다.