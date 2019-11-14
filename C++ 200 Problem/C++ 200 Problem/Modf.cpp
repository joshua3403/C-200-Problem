#include "pch.h"
#include <iostream>

using namespace std;

int main()
{

	double x = 1.2345;
	double div = 0.0;
	double mod = 0.0;

	mod = modf(x, &div);

	cout << "1.2345의 몫 : " << div << ", 나머지 : " << mod << endl;

	return 0;
}

// modf 함수 반환값은 나머지 소수이며, modf 함수 인자로 전달되는 두 번째 변수에는 정수 몫이 저장된다.
// div 변수의 주소를 넘기기 때문에 해당 함수에서 값을 변경하면 함수 호출 영역 밖에서도 값이 유효하게 된다.

