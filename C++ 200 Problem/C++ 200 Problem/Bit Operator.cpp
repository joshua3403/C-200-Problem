#include "pch.h"
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	bitset<8> bit1;
	bit1.reset();	// 0000 0000
	bit1 = 127;
	
	bitset<8> bit2;
	bit2.reset();
	bit2 = 0x20;

	bitset<8> bit3 = bit1 & bit2;
	bitset<8> bit4 = bit1 | bit2;
	bitset<8> bit5 = bit1 ^ bit2;
	bitset<8> bit6 = ~bit1;
	bitset<8> bit7 = bit2 << 1;
	bitset<8> bit8 = bit2 >> 2;

	cout << "bit1 & bit2 : " << bit3 << ", " << bit3.to_ulong() << endl;
	cout << "bit1 | bit2 : " << bit4 << ", " << bit4.to_ulong() << endl;
	cout << "bit1 ^ bit2 : " << bit5 << ", " << bit5.to_ulong() << endl;
	cout << "~bit1 : " << bit6 << ", " << bit6.to_ulong() << endl;
	cout << "bit2 << 1 : " << bit7 << ", " << bit7.to_ulong() << endl;
	cout << "bit2 >> 1 : " << bit8 << ", " << bit8.to_ulong() << endl;

	return 0;
}

// & and 연산은 두 값이 모두 1일 때 결과도 1.
// | or 연산은 두 값 중 하나만 1이어도 결과는 1.
// ^ xor 연산은 두 값이 같으면 0 다르면 1.
// ~ 반전 연산은 0을 1로 1을 0으로 바꿈.
// >> 오른쪽으로 한칸씩 이동. 빈 곳은 0으로 채워줌.
// << 왼쪽으로 한칸씩 이동. 빈 곳은 0으로 채워줌.