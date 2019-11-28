#include "pch.h"
#include <iostream>

using namespace std;

class Landload
{
public:
	void IamLandload()
	{
		cout << "건물주 입니다." << endl;
	}
};

class Tenant
{
public:
	void IamTenant()
	{
		cout << "세입자 입니다." << endl;
	}
};

class Nation : public Landload, public Tenant
{
public:
	void Who()
	{
		cout << "저는 ";

		if (is_landload == true)
			IamLandload();
		else
			IamTenant();
	}

public:
	bool is_landload;
};

int main()
{
	Nation nation;
	nation.is_landload = true;
	nation.Who();

	return 0;
}

// Has-a 관계가 한쪽의 일방적인 포함이라면, Is-A 관계는 무엇은 무엇이다, 무엇은 한 종류이다라는 의미이다.
// 예제에서 건물주나 세입자는 일반 국민 중 한 사람일 수 있지만, 모든 국민이 건물주이거나 세입자일 수는 없다.
// 이런 상속관계는 객체지향 프로그래밍의 근간이 된다.
// 클래스를 이용해 프로그래밍을 할 때 하위 기능을 분리하여 상위 공통 클래스에 상속되도록 코드를 구성하는 것이 바로 객체지향 프로그래밍의 기초이다.