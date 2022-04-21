#include <iostream>
#include <cmath> // sqrt() 3- square root 제곱근. 2 ^ 3 = 8 여기서 2 

using namespace std;


// goto - 반복문의 원조격
// 어셈블리어 에서 반복문을 goto / basic 에서도 많이 씀 
// 현재는 많이 안씀 

int main(void)
{

	double x;

	//goto 문은 책갈피 라고 생각하면 됨

tryAgain : // label - 이름은 맘대로 



	cout << "Enter a non-negative number" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain; // 위의 tryAgain 으로 돌아가서 다시 실행 
	
	cout << sqrt(x) << endl;

	return 0;
}