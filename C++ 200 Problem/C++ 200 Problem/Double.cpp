
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double pi_d = 3.14;
	float pi_f = 3.14f;

	cout << "pi_d = " << pi_d << endl;
	cout << "pi_f = " << pi_f << endl;
	
	return 0;
}

 //double은 8바이트, float은 4바이트
// 되도록이면 double과 float를 동시에 사용하지 않거나, double만 사용할 것. 오버 플로우와 언더 플로우가 발생 가능