#include <iostream>
#include <iomanip> // setprecision 
#include <cmath>
#include <limits>
using namespace std;

//    Relation Operators - ���� ������
//	  <   >   ==    ! 


void basic_relation_operators();


int main(void)
{
	

//	basic_relation_operators();

	// �ε� �Ҽ��� ���Ҷ� ������ ���� ���� 
	// ���ƾ� �Ұ� �ٸ��� ���� 

	double d1(100 - 99.99); // 0.001
	double d2(10 - 9.99);	// 0.001
	double zero = 0.0;
	double d3 = 5.0 / zero;
	//������ ������ ������ �����ؼ� �װ� ���� �� ����
	//�������� ������ �����ٰ� ���� 
	const double epsilon = 1e-16; // �������� ��Ȳ�� ���� ���߿� ���� 

	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal " << endl;
	else
		cout << "Not equal" << endl;

							
							
	//debugger�� Ȯ�������� d1 = 0.01000000000000005116
	// d2 = 0.0099999999999999997868
	cout << std::setprecision(30);
	cout << d1 << "   "<< d2 << endl;

	cout << std::abs(d1 - d2) << endl; // std::abs (absolute num - ���밪)
	cout << std::boolalpha;
	cout << d3 << isinf(d3) << endl;
	
	if (d1 == d2)
		cout << "Equal" << endl;
	else
	{
		cout << "Not Equal" << endl;
		
		if (d1 > d2) cout << "d1 > d2" << endl;
		else // if(d1 < d2)	
			cout << "d1 < d2" << endl;
	}

	

	return 0;

}

void basic_relation_operators()
{
	while (1)
	{
		int x, y;
		std::string p;

		cout << "input?:  x   y   z\n" <<
			"To exit, input \"exit\" in z parameter" << endl;
		cin >> x >> y >> p;

		if (p == "exit")
		{
			break;
		}

		cout << "your input: " << x << " " << y << endl;

		if (x == y)
			cout << "Equal\n";

		if (x != y)
			cout << "Not Equal\n";

		if (x > y)
			cout << "x is greater than y\n";

		if (x < y)
			cout << "x is less than y\n";

		if (x >= y)
			cout << " x is greater than y or equal to y" << endl;

		if (x <= y)
			cout << " x is less than y or equal to y" << endl;


	}
}