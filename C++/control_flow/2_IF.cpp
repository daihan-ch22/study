#include <iostream>

using namespace std;

int min(int x, int y)
{
	//if (x>y)		return y;
	//else			return x;

	return (x > y) ? y : x; // x>y -> y return 
}
int main(void)
{
	int x; 
	std::cin >> x;

	if (x > 10) // ��ȣ �� -> boolean 
		std::cout << x << " is greater than 10\n";
	else if ( x < 10)
		cout << x << " is not greater than 10\n";
	else
		cout << x << " is 10\n";
	// x�� 10�� ��츦 ���� �� ��쿡�� �׳� else if ���� �������. 
	// �׸��� �ּ� �߰�. do nothing when x = 10; 


	if (1)
	{
		int x = 5;
		cout << x << endl;
	}
	
	else
	{
		int x = 6;
	} 
	cout << x;
	// ���⼭ ������� cin x �� ����.
	// if ��ȣ ���� x�� ��ȣ ���� scope ������ �۵� else�� �������� 
	
	
	//�Ǽ� ������/////

	if (x > 10);  // null statement �� �Ⱦ�. ����쿣 �ּ� ����
	{
		x = 1; // x=1�� �׻����� 
	}
	
	if ( x = 0) // x = 0; if(x) // x�� 0�� ���� false���� �ǹ��� 

	
	return 0; 
}