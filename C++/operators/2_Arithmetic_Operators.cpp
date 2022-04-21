#include <iostream>

// 산술 연산자
// 정수 나누기 와 실수 나누기는 결과가 다름! 


 
int main(void)
{

	using namespace std;


	int x = 7, y = 4;
	cout << x / y << endl;

	// 둘중 하나라도 실수면 실수값으로 출력 
	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl; 

	///////////////////////////////////////////////////
	// 매우 자주쓰임! 
	
	int z = x; // x값을 z 가 가르키고 있는 메모리에 넣어라 

	z += y; // z = z + y
	//    -=   *=   /=    %=



	return 0;
}

