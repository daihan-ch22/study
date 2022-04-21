#include <iostream>
#include <cstdint> // included in iostream 


// 표준 c++에서는 데이터 사이즈를 최소로 함 
// 
// 멀티 플랫폼 개발 환경에서는 플랫폼 / 컴파일러 마다 구현된 사이즈가 다를 수 있음.
// 어떤건 8byte, 다른건 2byte.. etc. 
// 불확실성이 있기때문에 c++11 부터는 어떤 플랫폼이던데 같은 데이터 사이즈를 사용하는 고정 너비 정수를 사용시작.

int main(void)
{
	using namespace std;

	std::int16_t i(5); //16bit, 2bytes
	std::int8_t myint = 65; //type has defined as char

	cout << i << endl;
	cout << myint << endl;

	std::int_fast8_t fi(5); //integer 중 8bit 사이즈 중 가장 빠른 data type
	std::int_least64_t fl(5); //적어도 64bit를 갖는 data type 

	return 0;
}