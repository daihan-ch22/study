#include <iostream>
#include <bitset>


// 16������ RGB �ڵ带 �Է½� 10���������� ��ȯ�ϱ� 
// #FFD700 -------> (255,215,0)

using namespace std;
int main2(void)
{

	// bitflag�� ���� DA ���� 


	const unsigned int red_mask = 0xFF0000; //FF ���� ū�� 11111111  
	cout << std::bitset<32>(red_mask) << endl; 
	//00000000 11111111 0000000000000000

	const unsigned int green_mask = 0x00FF00;
	cout << std::bitset<32>(green_mask) << endl;
	//0000000000000000 11111111 00000000
	
	const unsigned int blue_mask = 0x0000FF;
	cout << std::bitset<32>(blue_mask) << endl << endl;
	//000000000000000000000000 11111111


	
	
	unsigned int pixel_colour = 0xDAA520;  
	cout << std::bitset<32>(pixel_colour) << endl;
	//000000001101101010100101 00100000


	unsigned char blue = pixel_colour & blue_mask;
	unsigned char green = (pixel_colour & green_mask) >> 8;
	unsigned char red = (pixel_colour & red_mask) >> 16;


	// pixel_colour �� ������ 8�ڸ� 00100000 �� ���
	cout << "blue  " << bitset<8>(blue) 
		<< "   " << static_cast<int>(blue) << endl;


	//char = 1byte = 8 bit�� �� �� 8��Ʈ�ڸ��ۿ� ǥ���� �ȵ�  
	//int green���� Ȯ���غ��� ������ ��.
	// shift �� 8ĭ �и� �ȴ� 
	
	cout << "green " << bitset<8>(green)
		<< "   " << static_cast<int>(green) << endl;

	
	cout << "red   " << bitset<8>(red)
		<< "   " << static_cast<int>(red) << endl;
	
	
	return 0; 
}