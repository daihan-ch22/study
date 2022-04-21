#include <iostream>

using namespace std;
// iteration :: 반복


int pow(int base, int exponent) //pow (제곱구하기) 함수 직접 만들기
{
	int result{ 1 };

	for (int count = 0; count < exponent; ++count)
	{
		result *= base; 
	}
	return result;
}



int main(void)
{


	// for 내부에서 정의한 변수는 for 벗어나면 사라짐. 
	// 계속 쓰고싶으면 for 밖에서 정의하고 for 첫번째 구역 빈칸 놔두기
	int count{ 0 };
	for (; count < 10; ++count) 
	{
		cout << count << endl;
	}

	// for endless loop
	// -> for ( ; ; ++count) 

	cout << pow(2, 3) << endl;

	//for문 안에서 변수를 여러개 정의 가능
	for (int i = 0, j = 0; (i+j)< 10; ++i, j += 2)
		cout << i << "  " << j << endl; 



	//while 과 마찬가지로 unsigned 사용시 주의 / 최적화시에는 좋음
	//아래 코드는 무한진행/ 0 이하로 내려가기떄문
	//for (unsigned int i = 9; i >= 0; --i)
	//{
	//	cout << i << endl;
	//}


	return 0;
}