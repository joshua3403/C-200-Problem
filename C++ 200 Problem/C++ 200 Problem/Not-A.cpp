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

class MaleMonkey
{
public:
	void Favorite()
	{
		cout << "Favorite : Female Monkey" << endl;
	}
};

class Nation : public Landload, public MaleMonkey
{
public:
	void Who()
	{
		IamLandload();
	}
};

int main()
{
	Nation nation;
	nation.Who();

	return 0;
}

// 이전 두 관계가 어쨌든 상호 보완적인 요소를 나타낸다면, Not-A 관계는 논리, 현실적으로 옳지 않은 관계를 말한다.
// 이때 "옳지 않다"는 것은 한 클래스, 또는 한 파일, 또는 한 계층 구조 안에 전혀 어울리지 않는 클래스나 소스 묶음이 있다는 것이다.
// 위 예제 소스를 보면 MaleMonkey 클래스는 Landload, Nation 클래스와 아무런 연관성이 없다.
// 객체지향적 계층 구조를 구성하는데 전혀 어룰리지 않는 부분이 있다면 프로그램 전체 설계에 수정 사항이 발생했다는 뜻이기도 하다.