#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	void SetName(string name)
	{
		name_ = name;
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
	king_info.SetName("조선 세조 이유");

	cout << king_info.GetName() << endl;

	return 0;
}

// 클래스는 유형별로 분리된 독립된 공간이라 할 수 있다.
// 유사한 요소들을 하나로 모으는 이름을 클래스라 부를 수도 있는 것이다.
// 일종의 회사라고 생각하면 된다.
// 회사에는 다양한 종류가 있기 때문에 각각의 회사들을 하나의 객체라고 생각하면 된다.
// 접근 지정자
// Public : 공개된 정보, 외부 접근 허용.
// Protected : 제한된 정보, 해당 클래스나 서브 클래스에서만 접근 허용.
// Private : 제한된 정보, 해당 클래스에서만 접근 허용.