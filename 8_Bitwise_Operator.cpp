#include <iostream>
#include <bitset> // Binary Library

// Bitwise Operators - ��Ʈ���� ������ 
// �� ��Ʈ ������ ��� 
// 1. FASTER 
// 2. ������� bool �� 0 �� 1 �ۿ� ���µ� �޸𸮴� �ּ� 1����Ʈ(8��Ʈ) - ��ȿ��
// �޸𸮸� ȿ�������� ����ϱ� ���� 
//
//
//  ���⿡���� << >> �� cout �� cin ���� �ٸ� 
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
	// pow ���� shift operator ���� ��� (Ư�� ū �� �ٷ궧 - �����Ƿ�)
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
	// 1024 �� 8 �� �׳� �����⸦ �ϸ� �Ϲ����� ������� �����⸦��.
	// shift�� �� ���� ���� �������� �Ϲ����� ������ ���ϱ⿣ �� ����. 

}


	int bit_wise_shift_left(int a);
	int bit_wise_shift_right(int a);


int main(void)
{
	
	// ���������� 2������ ��� ó���Ǵ��� ���� <bitset> 
	// std::bitset<4>(a)
	// <4> -> 4bits 
	unsigned int a = 3;
	cout << std::bitset<16>(a) << endl;
	//
	//
	// a << 2 -> 2ĭ 
	// shift - ��Ʈ�� �ش� �������� xĭ �ű� 
	unsigned int b = a << 3;
	cout << std::bitset<16>(b) << " " << b << endl << endl;


	bit_wise_shift_left(3);
	bit_wise_shift_right(1024);


	//#######  bitwise AND / OR / XOR ######
	{
		cout << "#######  bitwise NOT ######" << endl;
		// 0 �� 1 �ڹٲ� 
		cout << std::bitset<16>(a) << endl;
		cout << std::bitset<16>(~a) << "  " << (~a) << endl << endl;
	}

	//#######  bitwise AND / OR / XOR ######
	{
		cout << "#######  bitwise AND / OR / XOR ######" << endl;
		unsigned int x = 0b1100; // 0b �տ� ���̸� ������
		unsigned int y = 0b0110;
		// ��Ʈ ������ �� (���η� ��)  // 
		// 1 1 0 0 
		// 0 1 1 0

		cout << "AND   " << std::bitset<4>(x & y) << endl;
		cout << "OR    " << std::bitset<4>(x | y) << endl;
		cout << "XOR   " << std::bitset<4>(x ^ y) << endl << endl;

		// <�̷������ε� ����> 
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

	// warning -> �Ʒ��ڵ�� ��� 
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
