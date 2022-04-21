#include <iostream>
#include <cstdint> // included in iostream 


// ǥ�� c++������ ������ ����� �ּҷ� �� 
// 
// ��Ƽ �÷��� ���� ȯ�濡���� �÷��� / �����Ϸ� ���� ������ ����� �ٸ� �� ����.
// ��� 8byte, �ٸ��� 2byte.. etc. 
// ��Ȯ�Ǽ��� �ֱ⶧���� c++11 ���ʹ� � �÷����̴��� ���� ������ ����� ����ϴ� ���� �ʺ� ������ ������.

int main(void)
{
	using namespace std;

	std::int16_t i(5); //16bit, 2bytes
	std::int8_t myint = 65; //type has defined as char

	cout << i << endl;
	cout << myint << endl;

	std::int_fast8_t fi(5); //integer �� 8bit ������ �� ���� ���� data type
	std::int_least64_t fl(5); //��� 64bit�� ���� data type 

	return 0;
}