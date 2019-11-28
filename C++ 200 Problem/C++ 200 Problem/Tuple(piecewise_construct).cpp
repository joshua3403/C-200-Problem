#include "pch.h"
#include <iostream>
#include <tuple>

using namespace std;

struct TupleExam
{
	TupleExam(tuple<int, string>)
	{
		cout << "Tuple로 인자 전달" << endl;
	}

	TupleExam(int n, string s)
	{
		cout << "piecewise_construct로 인자 전달" << endl;
	}
};

int main()
{
	tuple<int, string> data(1, "str");

	pair<TupleExam, TupleExam> data1(data, data);
	pair<TupleExam, TupleExam> data2(piecewise_construct, data, data);
	pair<TupleExam, TupleExam> data3(make_tuple(2, "str"), make_tuple(2, "str"));
	pair<TupleExam, TupleExam> data4(piecewise_construct, make_tuple(2, "str"), make_tuple(2, "str"));

	return 0;

}

// 튜플의 요소를 개별로 분할하여 이용하는 방법
// 튜플의 개별 요소를 딸 ㅗ인자로 받아 pair로 변환한다.