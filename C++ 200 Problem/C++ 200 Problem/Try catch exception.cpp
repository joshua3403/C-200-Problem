#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data;
	int number = 0;

	try
	{
		number = data.at(10);
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}

	return 0;
}

// 예외 처리는 앞서 언급했든 프로그래머가 의도하지 않거나, 예상치 못했던 에러를 해결하는데 도움을 준다.
// 또한 개발 과정에서 내부적으로 사용할 많은 에러 코드가 작성된다.
// 모든 에러 코드를 하나로 작성하는 것 또한 어려울 수 있다.
// 이럴 때 원하는 부분을 try catch로 묶어 일괄적으로 처리하는 것이 좋다.
// catch에는 여러 인자가 올 수 있는데 기본적으로는 exception을 사용한다.