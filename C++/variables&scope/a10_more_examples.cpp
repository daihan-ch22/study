#include <iostream>

using namespace std;

struct Employee // 2 + (+2) + 4 + 8 = 14 (16)bytes.  // Padding
{
	short		id;		// 2 byte +( another 2 bytes) 
	int			age;	// 4 byte
	double		wage;	// 8 byte


};


int main2(void)
{
	Employee emp1;

	cout << sizeof(Employee) << endl; 
	// 사이즈는 16이 나오네? 
	// 자료를 배치할떄 컴퓨터가 잘 처리할수 있는 형태로 배치를 하다보면
	// 2byte 배치가 잘 안됨.
	// 2byte 뒤에 빈칸2byte  -> 이런걸 Padding 이라 부름 




	return 0; 
}