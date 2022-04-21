#include <iostream>
#include <bitset> // Binary Library

// Bitwise Operators - 비트단위 연산자 
// 각 비트 단위의 계산 
// 1. FASTER 
// 2. 예를들어 bool 은 0 과 1 밖에 없는데 메모리는 최소 1바이트(8비트) - 비효율
// 메모리를 효율적으로 사용하기 위함 
//
//
//  여기에서의 << >> 는 cout 과 cin 과는 다름 
//  (cout - cin -> operator overloading) 
//
//
//		<<     left shift  
//		>>	   right shift 
//		~(bitwise NOT)   &(bitwise AND) 
//		|(bitwise OR)    ^(bitwise XOR) 
//
//		** Bitwise operator - Normally uses UNSIGNED **

using namespace std;

namespace Note_Shift
{
	// pow 보다 shift operator 많이 사용 (특히 큰 수 다룰때 - 빠르므로)
	// 3					
	// 3 * 2				<<1
	// 3 * 2^2				<<2
	// 3 * 2^3				<<3
	// 3 * 2^4				<<4


	//Right shift 
	// 1024							
	// 1024 / 2				>>1
	// 1024 / 2^2			>>2
	// 1024 / 2^3			>>3
	// 1024 / 2^4			>>4
	// 1024 를 8 로 그냥 나누기를 하면 일반적인 방법으로 나누기를함.
	// shift를 쓸 경우는 더욱 빠르지만 일반적인 나누기 곱하기엔 못 쓴다. 

}


	int bit_wise_shift_left(int a);
	int bit_wise_shift_right(int a);


int main(void)
{
	
	// 내부적으로 2진수로 어떻게 처리되는지 볼때 <bitset> 
	// std::bitset<4>(a)
	// <4> -> 4bits 
	unsigned int a = 3;
	cout << std::bitset<16>(a) << endl;
	//
	//
	// a << 2 -> 2칸 
	// shift - 비트를 해당 방향으로 x칸 옮김 
	unsigned int b = a << 3;
	cout << std::bitset<16>(b) << " " << b << endl << endl;


	bit_wise_shift_left(3);
	bit_wise_shift_right(1024);


	//#######  bitwise AND / OR / XOR ######
	{
		cout << "#######  bitwise NOT ######" << endl;
		// 0 과 1 뒤바꿈 
		cout << std::bitset<16>(a) << endl;
		cout << std::bitset<16>(~a) << "  " << (~a) << endl << endl;
	}

	//#######  bitwise AND / OR / XOR ######
	{
		cout << "#######  bitwise AND / OR / XOR ######" << endl;
		unsigned int x = 0b1100; // 0b 앞에 붙이면 이진수
		unsigned int y = 0b0110;
		// 비트 단위로 비교 (세로로 비교)  // 
		// 1 1 0 0 
		// 0 1 1 0

		cout << "AND   " << std::bitset<4>(x & y) << endl;
		cout << "OR    " << std::bitset<4>(x | y) << endl;
		cout << "XOR   " << std::bitset<4>(x ^ y) << endl << endl;

		// <이런식으로도 쓰임> 
		// x = x & y
		// x &= y  
	}
	
	//QUIZ
	{
		cout << "#######  bitwise AND / OR / XOR ######" << endl;
		unsigned int quiz = 6;
		unsigned int quizv = (quiz >> 2);
		cout << bitset<10>(quiz) << "  " << quiz << endl;
		cout << bitset<10>(quizv) << "  " << quizv << endl;

		int i(5), j(12);

		cout << "bitset(i)\t" << bitset<10>(i) << endl;
		cout << "bitset(j)\t" << bitset<10>(j) << endl;
		cout << "OR      \t" << bitset<10>(i | j) << endl;
		cout << "AND     \t" << bitset<10>(i & j) << endl;
		cout << "XOR     \t" << bitset<10>(i ^ j) << endl;
	}
	
	return 0;
}


int bit_wise_shift_left(int a)
{
	cout << "#######  bitwise left ######" << endl;
	cout << "Given number:  " << a << endl;

	cout << std::bitset<16>(a) << "  " << a << "\n\n";
	cout << bitset<16>(a << 1) << "  " << (a << 1) << endl;
	cout << bitset<16>(a << 2) << "  " << (a << 2) << endl;
	cout << bitset<16>(a << 3) << "  " << (a << 3) << endl;
	cout << bitset<16>(a << 4) << "  " << (a << 4) << endl << endl;
	return a;

	// warning -> 아래코드로 사용 
	//cout << bitset<8>(static_cast<unsigned>(a << 1)) << "  " << (a << 1) << endl;
	//cout << bitset<8>(static_cast<unsigned>(a << 2)) << "  " << (a << 2) << endl;
	//cout << bitset<8>(static_cast<unsigned>(a << 3)) << "  " << (a << 3) << endl;
	//cout << bitset<8>(static_cast<unsigned>(a << 4)) << "  " << (a << 4) << endl;
}

int bit_wise_shift_right(int a)
{
	cout << "#######  bitwise right ######" << endl;
	cout << "Given number:  " << a << "\n\n";

	cout << std::bitset<16>(a) << "  " << a << endl;
	cout << bitset<16>(a >> 1) << "  " << (a >> 1) << endl;
	cout << bitset<16>(a >> 2) << "  " << (a >> 2) << endl;
	cout << bitset<16>(a >> 3) << "  " << (a >> 3) << endl;
	cout << bitset<16>(a >> 4) << "  " << (a >> 4) << endl << endl;

	return a;
}
