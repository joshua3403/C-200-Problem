#include "pch.h"
#include <iostream>

using namespace std;

class Rent
{
public:
	void Payment()
	{
		cout << "임대료를 받습니다." << endl;
	}
};

class Landload : public Rent
{
public:
	void GetMoney()
	{
		cout << "건물주라서 ";
		Payment();
	}
};

int main()
{
	Landload master;
	master.GetMoney();

	return 0;
}

// 클래스 상속 관계 중 하나인 Has-a 관계는 포함, 집합 관계라고 한다.
// 위의 예제처럼 건물을 소유한 건물주는 임대료를 받는다. 논리적으로 타당하나, 임대료가 건물주를 받는다는 논제는 옳지 않다.
// 이렇게 부모 클래스가 자식 클래스를 포함, 소유하는 관계를 Has-a 관계라고 한다.
// 코드 재사용성을 위해 명백한 포함, 소유 관계를 정의하는 것이 필요하다.