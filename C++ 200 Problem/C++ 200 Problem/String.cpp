
#include "pch.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string my_country = "korea";
	string my_job = "developer";

	cout << "Country : " << my_country << endl;
	cout << "Job : " << my_job << endl;

	string my_info = my_country + ", " + my_job;

	cout << "My info : " << my_info << endl;

	return 0;
}

// C에서는 char 배열을 이용해 문자열을 사용했지만 C++에서는 string으로 문자열을 구성한다.