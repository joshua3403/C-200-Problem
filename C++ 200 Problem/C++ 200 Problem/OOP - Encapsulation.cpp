#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
	};

public:
	void SetValue(const string name, const string son, int ascend)
	{
		name_ = name;
		son_ = son;
		ascend_ = ascend;
	}

	string GetNameSon() const
	{
		return name_ + "의 아들 " + son_;
	}

	string GetNameAscend() const
	{
		return name_ + " 즉위 연도 " + to_string(ascend_) + "년";
	}

private:
	string name_;
	string son_;
	int ascend_;
};

int main()
{
	KingInfo king_info;
	king_info.SetValue("선조", "광해군", 1567);

	cout << king_info.GetNameSon() << endl;
	cout << king_info.GetNameAscend() << endl;

	return 0;
}

// 캡슐화의 목적은 용도가 비슷한 데이터들을 모아 한데 이용하는 것이다. 비슷한 용도끼리 모아두면 코드 재활용성도 높아지고 정보은닉도 이루어지는 장점이 있다.