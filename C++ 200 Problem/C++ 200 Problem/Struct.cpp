#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Princess
{
	string name;
	string father;
	string birthday = "알 수 없음";

} Goryeo[2]; 

int main()
{
	Princess jungmyung;
	jungmyung.name = "정명공주";
	jungmyung.father = "조선 선조";
	jungmyung.birthday = "1603년 6월 27일";

	Goryeo[0].name = "선정왕후";
	Goryeo[0].father = "고려 성종";
	Goryeo[1].name = "효정공주";
	Goryeo[1].father = "고려 현종";

	cout << " == 조선 공주 == " << endl;
	cout << jungmyung.name << endl;
	cout << jungmyung.father << endl;
	cout << jungmyung.birthday << endl;

	cout << " == 고려 공주 == " << endl;
	cout << Goryeo[0].name << endl;
	cout << Goryeo[0].father << endl;
	cout << Goryeo[0].birthday << endl << endl;
	cout << Goryeo[1].name << endl;
	cout << Goryeo[1].father << endl;
	cout << Goryeo[1].birthday << endl;

	return 0;
}

// 구조체는 여러 데이터 타입들을 한데 묶어 사용할 수 있는 일종의 데이터 묶음이다.
// C언어는 클래스 개념이 없기 때문에 주로 구조체를 이용해 데이터를 가공 후 저장하는 용도로 많이 사용한다.
// 하나의 주제에 맞는 여러 데이터 타입을 한데 묶어 사용할 수 있기 때문에 매우 편리하기 때문이다.
// 구조체와 클래스의 차이는 접근 지정자 밖에 없다.
// 12번 행 처럼 미리 변수 지정 가능.