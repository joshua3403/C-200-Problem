#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class TmpClass
{
public:
	TmpClass()
	{
		cout << "생성자 호출" << endl;
	}

	~TmpClass()
	{
		cout << "소멸자 호출" << endl;
	}

};

int main()
{
	TmpClass *temp_class = new TmpClass();

	delete temp_class;
	temp_class = nullptr;

	return 0;
}

// 클래스 객체나 변수 등은 사용하는 시점에 스택 또는 힙 영역에 메모리 할당이 이뤄진다.
// 사용이 끝나고 나선 메모리 해제가 이루어지며 컴퓨터로 해당 메모리 영역이 반환된다.
// 컴파일러는 이를 위해 클래스 객체가 삭제 될 때 소멸자 함수를 호출한다.
// 포인터를 이용해 new 객체를 생성하면 스택이 아닌 힙 영역에 할당된다.
// 객체를 new로 생성하면 delete로 삭제하고 포인터는 null로 만들어야 한다.