#include "pch.h"
#include <iostream>

using namespace std;

class GoodKing;
class BadKing;

class Info
{
	friend class GoodKing;

public:
	Info()
	{
	};

private:
	string achieve;
};

class GoodKing : Info
{
public:
	GoodKing()
	{
		achieve = "백제 중흥 군주 근초고왕";
	};

	void Display()
	{
		cout << achieve << endl;
	}
};

class BadKing : public Info
{
public:
	BadKing()
	{
	};
	void Display()
	{
		// cout << achieve << endl;
	}
};

int main()
{
	GoodKing king1;;
	king1.Display();

	BadKing king2;
	king2.Display();

	return 0;
}

// private는 외부에서 접근할 수 없도록 지정하는 키워드이다. 하지만 예외적으로 특정 클래스를 대상으로 이 접근 권한을 풀어줄 수 있다.