#include <iostream>
#include <bitset>
#include "header.h"


using namespace std;
// Auto Keywords & Type Inference
// Auto 키워드와 자료형 추론 


//(trailing return type)코드가 보기 편해짐 
// -> int 
// int 값이 나올거야

auto add(int x, int y) -> int
{
	return x + y; 
}

auto prac(int a, int b, long int k)
{
	int x = ((a + b) * k) << 2;

	cout << bitset<16>((a+b)*k) << endl;
	cout << "a: " << a << " b: "<<b << " k: " <<k << "   "
		<< x << endl;
	cout << bitset<16>(x) << endl; 

	int kk = x ^= 41;
	cout << bitset<16>(41) << endl; 
	cout << bitset<16>(kk) << endl; 

	cout << xxp <<" \n" << ppp << endl;
}

// argument는 auto 안됨
//입력 파라미터(arguments)에 오토를 넣고 싶단 얘기는
//오토를 자동으로 추론해달라는게 아니고 다양한 경우에 대해서 
// add 함수가 자동으로 만들어졌으면 좋겠다 


//**(중요)** 전방 선언만 하면 auto 사용 불가.
//return 값 타입을 추론 못하기 때문. 



// template를 사용 가능 (매우편함) - 강의 후반부
// c++17부터 template과 섞어서 여러개의 return을 동시에 반환할 수 있음



int main(void)
{
	

	//auto - 자동 형 추론 
	auto a = 123; // 123은 정수라 a가 알아서 int 로 정의됨. 
	auto d = 123.0;
	auto c = 1 + 2.0;  // 정수 + 실수 = 실수 

	

	auto result = add(1, 2); 
	// 함수에도 auto 사용 가능 

	prac(1, 2, 33);

	return 0; 
}