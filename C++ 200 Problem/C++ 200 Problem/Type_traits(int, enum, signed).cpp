#include "pch.h"
#include <iostream>

using namespace std;

enum TmpEnum{ };
enum class TmpEnumClass : int {};


int main()
{
	cout << boolalpha;

	cout << "== is_integral ==" << endl;
	cout << is_integral<TmpEnum>::value << endl;
	cout << is_integral<TmpEnumClass>::value << endl;
	cout << is_integral<signed int>::value << endl;
	cout << is_integral<unsigned int>::value << endl;
	cout << is_integral<double>::value << endl;
	cout << is_integral<bool>::value << endl;

	cout << "== is_enum ==" << endl;
	cout << is_enum<TmpEnum>::value << endl;
	cout << is_enum<TmpEnumClass>::value << endl;
	cout << is_enum<int>::value << endl;

	cout << "== is_signed ==" << endl;
	cout << is_signed<TmpEnum>::value << endl;
	cout << is_signed<signed int>::value << endl;
	cout << is_signed<unsigned int>::value << endl;

	cout << "== is_unsigned ==" << endl;
	cout << is_unsigned<TmpEnumClass>::value << endl;
	cout << is_unsigned<int>::value << endl;
	cout << is_unsigned<unsigned int>::value << endl;

	return 0;
}

// type_traits는 템플릿에서 유용하게 사용할 수 있다.
// 특별한 타입을 필요로 하거나 특정 타입을 꼭 상속받아야 하는 등 특정 상황이 발생하면 type_traits를 이용할 수 있다.