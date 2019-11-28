#include "pch.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

void Print(const map<int, string>& data)
{
	cout << "== Print ==" << endl;

	for (auto iter = data.begin(); iter != data.end(); ++iter)
		cout << iter->first << " : " << iter->second << ", ";

	cout << endl;
}

int main()
{
	map<int, string> data;
	data.insert({ 0, "첫 번째" });
	data.insert({ 1,"두 번째" });

	Print(data);

	auto ret = data.insert({ 1, "첫번째" });

	if (ret.second == true)
		cout << "== 데이터 추가 성공 ==" << endl;
	else
		cout << "== 데이터 추가 실패 ==" << endl;

	data.at(0) = "수정1";

	Print(data);

	return 0;
}

// map은 키와 값을 한 쌍으로 이용한다. 데이터 삽입, 수정, 삭제는 모두 키를 이용해 이루어지며 값은 중복될 수 있지만,
// 키는 중복될 수 없다. map은 중복되지 않는 절대값을 이용해 데이터를 다룰 때 유용하게 사용할 수 있다.
// insert가 정상적으로 수행되면 리턴된 pair가 마지막 요소를 가리키지만, 실패하면 이미 존재하는 key값의 위치를 반환한다.