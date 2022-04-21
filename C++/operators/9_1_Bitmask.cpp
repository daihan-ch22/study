#include <iostream>
#include <bitset>


// 16진수의 RGB 코드를 입력시 10진수형으로 전환하기 
// #FFD700 -------> (255,215,0)

using namespace std;
int main2(void)
{

	// bitflag로 앞의 DA 추출 


	const unsigned int red_mask = 0xFF0000; //FF 가장 큰값 11111111  
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


	// pixel_colour 의 마지막 8자리 00100000 가 블루
	cout << "blue  " << bitset<8>(blue) 
		<< "   " << static_cast<int>(blue) << endl;


	//char = 1byte = 8 bit라 맨 뒤 8비트자리밖에 표현이 안됨  
	//int green으로 확인해보면 추출은 됨.
	// shift 로 8칸 밀면 된다 
	
	cout << "green " << bitset<8>(green)
		<< "   " << static_cast<int>(green) << endl;

	
	cout << "red   " << bitset<8>(red)
		<< "   " << static_cast<int>(red) << endl;
	
	
	return 0; 
}