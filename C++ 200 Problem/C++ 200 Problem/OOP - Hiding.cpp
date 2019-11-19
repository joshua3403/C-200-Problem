#include "pch.h"
#include <iostream>

using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
	};

public:
	void SetValue(const string value)
	{
		if (value.empty() == false)
			value_ = value;
		else
			cout << "잘못된 인자!!" << endl;
	}

	string GetValue() const
	{
		if (value_.empty() == false)
			return value_;
		else
			return "설정을 먼저 해주세요.";
	}

private:
	string value_;
	int number_;
};

int main()
{
	KingInfo king_info1;
	king_info1.SetValue("조선 중종 이역");

	KingInfo king_info2;
	king_info2.SetValue("조선 인종 이호");

	// king_info1.value_ = "조선 명종 이환"; // 에러

	cout << king_info1.GetValue() << endl;
	cout << king_info2.GetValue() << endl;

	return 0;
}

// 객체지향 언어의 특징 중 한 가지는 정보은닉이다. 정보은닉은 외부에서 클래스 내부를 바라보는데 제한을 두어 임의로 클래스 내부 데이터를 교체하지 못하도록 막는 것이 목적이다.
// 또한 사용자가 굳이 알지 않아도 되는 사항은 숨겨 꼭 필요한 정보로만 프로그래밍 가능하도록 돕는다. 이처럼 제한된 사용 방법을 두면 소스코드를 안전하게 관리할 수 있고
// 해당 코드와 상관없는 지점과 시기 떄문에 발생할 수 있는 데이터 수정, 추가 오류 등도 방지할 수 있다.