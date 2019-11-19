#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
		value_ = "조선 성종 이혈";
	}

	KingInfo(const string value)
	{
		value_ = value;
	}

	KingInfo(const int value)
	{
		value_ = "연산군 즉위연도 : ";
		value_ += to_string(value);
	}

	string GetValue()
	{
		return value_;
	}

private:
	string value_;

};

int main()
{
	KingInfo king_info1;
	KingInfo king_info2("조선 연산군 이융");
	KingInfo king_info3(1494);

	cout << king_info1.GetValue() << endl;
	cout << king_info2.GetValue() << endl;
	cout << king_info3.GetValue() << endl;

	return 0;
}

// 생성자는 클래스 객체가 만들어질 때 자동으로 호출된다. 생성자 이름은 클래스 이름과 동일하며 리턴값과 인자는 있을 수도, 없을 수도 있다.