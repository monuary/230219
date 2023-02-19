//this 포인터를 쓰면 같은 이름의 변수를 함수에 사용할 수 있기 때문에, 이름짓기 힘든 상황에 도움이 된다.
//this-> 다음에는 함수 내가 아닌, 클래스 내에서 정의된 변수만 나올 수 있다.
//또한 함수 내에 정의된 매개변수가 클래스 변수와 이름이 같을 경우, 함수 내의 매개변수가 우선 적용된다.
//따라서 이름을 겹치려면, this 포인터가 유효하다.

#include<iostream>
using namespace std;

class TwoNumber
{
	int n1, n2;
public:
	TwoNumber(int n1, int n2)
	{
		this->n1 = n1;	//포인터(메모리)에 해당하는 변수나 함수를 불러올 때, ->를 쓴다.
		this->n2 = n2;	//이니셜라이즈를 쓸 때는 this를 사용할 수 없다.
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