#include "pch.h"
#include <iostream>

using namespace std;

class Ondal
{
public:
	friend void GetYear(Ondal ondal)
	{
		cout << "아단성 전투 연도 : " << ondal.year_ << endl;
	}

	void SetYear(int year)
	{
		year_ = year;
	}

private :
	int year_;
};

int main()
{
	Ondal ondal;
	ondal.SetYear(590);

	GetYear(ondal);

	return 0;
}

// friend 키워드를 이용하면 권한을 제어할 클래스를 지정할 수 있다.
// 외부의 모든 접근을 허용하는 friend 키워드는 매우 제한적으로 사용하거나 아예 사용하지 않는 것이 좋다.
// 전역 변수처럼 좋지 않은 기능이기 때문에 사용하지 않는 것을 권장한다.
// 객체지향 언어의 특성 중 하나인 정보은닉을 깨뜨리는 friend 키워드는 앞선 예제처럼 클래스에 적용할 수 있고, 하나의 함수에만 적용할 수도 있다.