#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
class TemplateData
{
public:
	void Add(T arg)
	{
		data_.push_back(arg);
	}

	int Size()
	{
		return data_.size();
	}

	void Print()
	{
		for (int i = 0, size = data_.size(); i < size; i++)
			cout << "data : " << data_.at(i) << endl;
	}

private:
	vector<T> data_;
};

int main()
{
	TemplateData<int> data_int;
	data_int.Add(1);
	data_int.Add(2);
	data_int.Print();
	cout << data_int.Size() << endl;

	TemplateData<string> data_string;
	data_string.Add("Hello");
	data_string.Add("World");
	data_string.Add("!!");
	data_string.Print();
}

// template�� �����ϸ鼭 <>�ȿ� class T�� �����ߴ�. class�� typename�̳� ���� �ǹ����� Ŭ���� ���ø��̶�� �������� ���� typename ��� class�� ��︰��.