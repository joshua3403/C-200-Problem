#include "pch.h"
#include <iostream>

using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
	};

public:
	void SetValue(const string value)
	{
		if (value.empty() == false)
			value_ = value;
		else
			cout << "�߸��� ����!!" << endl;
	}

	string GetValue() const
	{
		if (value_.empty() == false)
			return value_;
		else
			return "������ ���� ���ּ���.";
	}

private:
	string value_;
	int number_;
};

int main()
{
	KingInfo king_info1;
	king_info1.SetValue("���� ���� �̿�");

	KingInfo king_info2;
	king_info2.SetValue("���� ���� ��ȣ");

	// king_info1.value_ = "���� ���� ��ȯ"; // ����

	cout << king_info1.GetValue() << endl;
	cout << king_info2.GetValue() << endl;

	return 0;
}

// ��ü���� ����� Ư¡ �� �� ������ ���������̴�. ���������� �ܺο��� Ŭ���� ���θ� �ٶ󺸴µ� ������ �ξ� ���Ƿ� Ŭ���� ���� �����͸� ��ü���� ���ϵ��� ���� ���� �����̴�.
// ���� ����ڰ� ���� ���� �ʾƵ� �Ǵ� ������ ���� �� �ʿ��� �����θ� ���α׷��� �����ϵ��� ���´�. ��ó�� ���ѵ� ��� ����� �θ� �ҽ��ڵ带 �����ϰ� ������ �� �ְ�
// �ش� �ڵ�� ������� ������ �ñ� ������ �߻��� �� �ִ� ������ ����, �߰� ���� � ������ �� �ִ�.