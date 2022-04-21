#include <iostream>

//연산자 우선순위 / 결합법칙 


//c언어에서 제곱은  ^ 를 쓰지 않음
//include <cmath> 에서 std::pow (x , y) x^y 


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


	t /= --w + 5; //    /= L value 를 R value로 나눈 값의 몫을 저장 
	cout << t << "\t" << w << endl;



	return 0;
}