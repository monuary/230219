//this �����͸� ���� ���� �̸��� ������ �Լ��� ����� �� �ֱ� ������, �̸����� ���� ��Ȳ�� ������ �ȴ�.
//this-> �������� �Լ� ���� �ƴ�, Ŭ���� ������ ���ǵ� ������ ���� �� �ִ�.
//���� �Լ� ���� ���ǵ� �Ű������� Ŭ���� ������ �̸��� ���� ���, �Լ� ���� �Ű������� �켱 ����ȴ�.
//���� �̸��� ��ġ����, this �����Ͱ� ��ȿ�ϴ�.

#include<iostream>
using namespace std;

class TwoNumber
{
	int n1, n2;
public:
	TwoNumber(int n1, int n2)
	{
		this->n1 = n1;	//������(�޸�)�� �ش��ϴ� ������ �Լ��� �ҷ��� ��, ->�� ����.
		this->n2 = n2;	//�̴ϼȶ���� �� ���� this�� ����� �� ����.
	}
	void ShowTwoNumber()
	{
		cout << this->n1 << endl;
		cout << this->n2 << endl;
	}
};

int main()
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}