#include <iostream>
#include <cmath> // sqrt() 3- square root ������. 2 ^ 3 = 8 ���⼭ 2 

using namespace std;


// goto - �ݺ����� ������
// ������� ���� �ݺ����� goto / basic ������ ���� �� 
// ����� ���� �Ⱦ� 

int main(void)
{

	double x;

	//goto ���� å���� ��� �����ϸ� ��

tryAgain : // label - �̸��� ����� 



	cout << "Enter a non-negative number" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain; // ���� tryAgain ���� ���ư��� �ٽ� ���� 
	
	cout << sqrt(x) << endl;

	return 0;
}