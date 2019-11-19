#include "pch.h"
#include <iostream>

using namespace std;

enum Status
{
	normal = 0,
	abnormal,
	disconnect = 100,
	close
};

enum class MachineStatus : char
{
	normal = 'n',
	abnormal,
	disconnect = 100,
	close
};

int main()
{
	MachineStatus machine = MachineStatus::abnormal;

	if (machine == MachineStatus::normal)
		cout << "Status : normal" << endl;
	else if (machine == MachineStatus::abnormal)
		cout << "Status : abnormal" << endl;
	else if (machine == MachineStatus::disconnect)
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	cout << "machine : " << static_cast<int>(machine) << "," << static_cast<char>(machine) << endl;

	return 0;
}

// enum class는 enum의 한계를 극복하기 위해 만들어졌다. enum 요소에 속하는 상수형들은 일반 변수들처럼 이름이 겹치면 안 되기 때문에 부득이 비슷한 이름으로 대체해 사용했었다.
// 하지만, enum class가 등장함으로써 같은 이름의 enum 요소를 사용할 수 있게 되었다.