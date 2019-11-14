#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	int z = 0;

	z = x > y ? x : y;

	cout << "x와 t중 더 큰 값은 : " << z << endl;

	return 0;
}

// if문을 짧게 축약하여 사용할 수 있는 장점이 있다. 하지만 가독성에 문제가 있다며 제한적으로 사용할 것을 권장하는 사람도 있다.
// 삼항연산자는 결국 연산에 그치지 않고 "분기하여 처리"하는 과정이 들어가다 보니 "차라리 if문을 사용"하자는 것으로 귀결됨.
