#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct Info
{
	string country;
	struct Who
	{
		string name;
		string nickname;
	} who;
};


int main()
{

	Info chuck = { "고려" , {"장군 척준경", "소드 마스터"} };
	Info anjang = { "고구려", "안장왕 고흥안", "한주 사랑" };

	cout << chuck.country << ", " << chuck.who.name << ", " << chuck.who.nickname << endl;
	cout << anjang.country << ", " << anjang.who.name << ", " << anjang.who.nickname << endl;

	return 0;
}

// 구조체와 구조체 변수를 보유하는 구조체를 선언한다.
// 구조체 변수가 선언된 순서에 맞춰 값을 대입하면 된다.
