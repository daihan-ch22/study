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

	if (x > 10) // 괄호 안 -> boolean 
		std::cout << x << " is greater than 10\n";
	else if ( x < 10)
		cout << x << " is not greater than 10\n";
	else
		cout << x << " is 10\n";
	// x가 10일 경우를 제외 할 경우에는 그냥 else if 에서 끝내면됨. 
	// 그리고 주석 추가. do nothing when x = 10; 


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
	// 여기서 결과값은 cin x 의 값임.
	// if 괄호 안의 x는 괄호 안의 scope 에서만 작동 else도 마찬가지 
	
	
	//실수 모음집/////

	if (x > 10);  // null statement 잘 안씀. 쓸경우엔 주석 적기
	{
		x = 1; // x=1이 항상실행됨 
	}
	
	if ( x = 0) // x = 0; if(x) // x에 0이 들어가고 false문이 되버림 

	
	return 0; 
}