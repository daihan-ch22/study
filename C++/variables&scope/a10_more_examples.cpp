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
	// ������� 16�� ������? 
	// �ڷḦ ��ġ�ҋ� ��ǻ�Ͱ� �� ó���Ҽ� �ִ� ���·� ��ġ�� �ϴٺ���
	// 2byte ��ġ�� �� �ȵ�.
	// 2byte �ڿ� ��ĭ2byte  -> �̷��� Padding �̶� �θ� 




	return 0; 
}