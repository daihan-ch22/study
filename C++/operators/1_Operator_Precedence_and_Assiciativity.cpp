#include <iostream>

//������ �켱���� / ���չ�Ģ 


//c���� ������  ^ �� ���� ����
//include <cmath> ���� std::pow (x , y) x^y 


using namespace std;


int main(void)
{
	
	//#1

	int r = 1 + 2 + 3 * 4;
	cout << r << endl;


	//#2

	double pi(3.1415926);
	int b = 5, c = 6;
	
	pi = b = c; // 6 6 6 right to left 

	cout << pi << "\t" << b << "\t" << c << endl;

	int t = 50, w = 10;


	t /= --w + 5; //    /= L value �� R value�� ���� ���� ���� ���� 
	cout << t << "\t" << w << endl;



	return 0;
}