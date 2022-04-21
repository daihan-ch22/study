#include <iostream>

int main(void)
{
	using namespace std;

	cout << std::boolalpha;

	// ***********NOT OPERATOR*********** 
	cout << "***********NOT OPERATOR***********\n";
	//not operator 가 우선순위라 뒤의 == 보다 먼저 결정된다 
	// if( !x==y)        DON'T
	// if( (!x) == y)	 DON'T

	int x = 5;
	int y = 9;

	if (!(x == y)) 	 // if ( x != y ) 
	{
		//   !(x와 y가 같다) ------> x 와 y는 다르다 
		cout << "x does not equal to y\n\n";
	}
	else // (x == y)
		cout << "x equals y\n\n";



	// ***********OR OPERATOR*********** 
	cout << "***********OR OPERATOR***********\n";
	int v = 1;
	if (v == 0 || v == 1)
		cout << "v is 0 or 1\n\n";


	// ***********Short Circuit Evaluation*********** 
	cout << "***********Short Circuit Evaluation***********\n";

	int i(2), j(2);
	if (i == 1 && j++ == 2)
		//  [매우중요!]  && 왼쪽이 false면, &&오른쪽은 건너뜀
	{
		// dosomething
	}
	cout << j << endl; // i = 1, j = 2    result: 3 
					   // i = 2, j = 2    result: 2 


	// *********** De Morgan's Law *********** 
	bool a = true;
	bool b = true;

	!(a && b);  //  same as  !a || !b; 
	!a && !b; // 분배법칙 적용 안됨 아래처럼 됨 
	!a || !b; 



	// *********** XOR Operator *********** 
	// 두 값이 다를때만 1을 출력 
	// 
	//		false false -> false  
	//		false true  -> true  (or)
	//		true  false -> true  (or)
	//		true  true  -> false 
	//		
	//      c++ 에는 XOR이 없으므로
	//		( a != b) 를 써야함 
	cout << "***********XOR Operator***********\n";
	bool q = false;
	bool w = false;
	cout << (q != w) << endl << endl;


	// *********** Wrapup *********** 
	cout << "***********ENDOFTHEDAY***********\n";
	int f = 1, g = 1, h = 0;

	cout << static_cast<bool>((h && g) || h || f) << endl;

	


	return 0;
}

