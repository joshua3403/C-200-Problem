#include "pch.h"
#include <iostream>

using namespace std;

int main()
{

	cout << "== 소수점 반올림 ==" << endl;
	cout << "round(1.1) : " << round(1.1) << endl;
	cout << "round(2.3) : " << round(-2.3) << endl;
	cout << "round(40.5) : " << round(40.5) << endl;
	cout << "round(55.7) : " << round(-55.7) << endl;
	cout << "round(100.9) : " << round(100.9) << endl;

	return 0;
}

// 양수라면 원하는 값으로 출력되지만, 음수의 경우 부호에 상관없이 무조건 올리기 때문에 의도하지 않은 값이 나올 수 도 있다.
// 음수라도 소수점이 5보다 크다면 무조건 1을 올려 원래 값보다 더 작은 값이 출력된다.