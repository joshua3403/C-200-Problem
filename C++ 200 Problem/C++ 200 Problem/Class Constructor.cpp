#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
		name_ = "조선 예종 이황";
	}

	string GetName()
	{
		return name_;
	}

private:
	string name_;
};

int main()
{
	KingInfo king_info;

	cout << king_info.GetName() << endl;

	return 0;
}

// 생성자는 클래스 객체가 만들어질 때 자동으로 호출된다. 생성자 이름은 클래스 이름과 동일하며 리턴값과 인자는 있을 수도, 없을 수도 있다.