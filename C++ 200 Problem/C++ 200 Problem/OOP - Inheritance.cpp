#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Info
{
public:
	Info()
	{
	};

public:
	string name_;
	int year_;
};

class GoodKing : public Info
{
public:
	GoodKing(const string country) : country_(country)
	{
	};
	void Display()
	{
		cout << country_ << " " << name_ << " 즉위 연도 BC : " << year_ << endl;
	}

private:
	string country_;
};

class BadKing : public Info
{
public:
	BadKing(const string country) : country_(country)
	{
	};
	void Display()
	{
		cout << country_ << " " << name_ << " 즉위 연도 BC : " << year_ << endl;
	}
private :
	string country_;
};

int main()
{
	GoodKing king1("고조선");
	king1.name_ = "단군왕검";
	king1.year_ = 2333;

	BadKing king2("고려");
	king2.name_ = "충혜왕";
	king2.year_ = 1330;

	king1.Display();
	king2.Display();

	return 0;
}

// 객체지향 프로그래밍에서는 겹치는 요소만 따로 분리하여 사용한다.
// 겹치는 요소를 매번 선언하는 것 보다 이 요소들을 미리 선언해 두고 다른 클래스에서 이 클래스를 상속받아 사용하는 것이다.