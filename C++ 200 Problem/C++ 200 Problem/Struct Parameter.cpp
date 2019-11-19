#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Princess
{
	string name;
	string father;
	string birthday;

} jungso;

void Print(Princess *who)
{
	cout << "jungso.name = " << who->name << endl;
	cout << "jungso.father = " << who->father << endl;
	cout << "jungso.birthday = " << who->birthday << endl;
}

int main()
{
	jungso.name = "정소공주";
	jungso.father = "조선 태종";
	jungso.birthday = "1412년";

	Print(&jungso);

	return 0;
}

// 여전히 call by reference가 헷갈린다.
// Print함수는 구조체 포인터를 인자로 받는데 이때 호출할때는 명시적 주소를 넘겨줘야 하고 받는 쪽에서는 포인터를 받는다.
// 이때 포인터 크기 4바이트가 넘어간다.
