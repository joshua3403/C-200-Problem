#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class InputError : public runtime_error
{
public:
	InputError(int idx, string msg) : runtime_error("")
	{
		cout << idx << "번 인덱스에 잘못된 입력값 : " << msg << endl;
	}
};

int main()
{
	vector<int> data;
	data.push_back(1);

	int idx = 10;
	int value = 20;

	try
	{
		if (idx >= data.size())
			throw InputError(idx, to_string(value));

		data.at(idx) = 90;
	}
	catch(InputError e)
	{
		cout << e.what();
	}

	return 0;
}

// 사용자 정의, 예외 처리 클래스를 선언한다.
// runtime_error를 상속받아야 try catch에서 사용할 수 있으며, runtime_error는 메시지를 출력하는 요소로 이해하자.