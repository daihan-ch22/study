#include <iostream>
#include <bitset>
#include "header.h"


using namespace std;
// Auto Keywords & Type Inference
// Auto Ű����� �ڷ��� �߷� 


//(trailing return type)�ڵ尡 ���� ������ 
// -> int 
// int ���� ���ðž�

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

// argument�� auto �ȵ�
//�Է� �Ķ����(arguments)�� ���並 �ְ� �ʹ� ����
//���並 �ڵ����� �߷��ش޶�°� �ƴϰ� �پ��� ��쿡 ���ؼ� 
// add �Լ��� �ڵ����� ����������� ���ڴ� 


//**(�߿�)** ���� ���� �ϸ� auto ��� �Ұ�.
//return �� Ÿ���� �߷� ���ϱ� ����. 



// template�� ��� ���� (�ſ�����) - ���� �Ĺݺ�
// c++17���� template�� ��� �������� return�� ���ÿ� ��ȯ�� �� ����



int main(void)
{
	

	//auto - �ڵ� �� �߷� 
	auto a = 123; // 123�� ������ a�� �˾Ƽ� int �� ���ǵ�. 
	auto d = 123.0;
	auto c = 1 + 2.0;  // ���� + �Ǽ� = �Ǽ� 

	

	auto result = add(1, 2); 
	// �Լ����� auto ��� ���� 

	prac(1, 2, 33);

	return 0; 
}