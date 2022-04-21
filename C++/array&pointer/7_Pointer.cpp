#include <iostream>
#include <typeinfo>

using namespace std;

//	������ �� &: address-of operator
//  
//  Pointer = �޸� �ּҸ� ��� (����) 
//
//  de-reference operator (*)
//	-> �����Ͱ� ���� �ּҿ� ���� �� �����Ͱ� �־�� ��� ���������� ����Ű�⸸
//	   �ϴ� �Ϳ� ���ؼ� "�׷� ���� �ű⿡ ��¥ �����ִ��� ���� �鿩�� ����"
//     �ϰ� ���������� �����Ѵٴ� �ǹ� 
// 
// 
//  pointer�� reference�� ���� - c++ ������ reference �� ���� ���� 
// 
//  *(&x) -> �ᱹ x���� ���� 
//
// 
//	Pointer�� �޸� �ּҸ� ���� ������ Ÿ�� ���� ��� ����
//	������ ��ü�� ������� ���� 8����Ʈ (�ּһ�����) (32��Ʈ - 4byte / 64��Ʈ - 8byte)
// 
// 
//	�����Ͱ� type�� �˰� �־�� �ϴ� ������ de-referencing �Ҷ� 
//  void, double, float �� ���� �������� ��Ÿ���ֱ� ����
// 
// 
// 
//	�Լ��� return Ÿ������ �����͸� ���� ���� ����. ( �Ķ���ͷε� ������ ����) - ��������
//
//
//	1. �����͸� ��������ν� �����͸� ȿ����/���ϰ� ���� ����. Ư�� ARRAY
//  2. ������ �� ��ü�� �������� ����� ���, �Ź� ������ ������ ���� ���� �ϱ⵵ ���ſ��
//		�ּҸ� �״�� ����.

struct Something
{
	int a, b, c, d; // 4 * 4 = 8 bytes
};

int main(void)
{
	int x = 5; 
	double d = 1.0;

	typedef int* pint; // �̷��� ������ Ÿ���� �� ó�� �ص� ��. (���߿� ����������)

	int *ptr_x = &x; 
	// �ڿ� �ٷ� ptr_y = &y �ϸ� ptr_y�� ������ X
	// pint ptr_x = &x, ptr_y = &y -> �̰� �Ѵ� �����Ͱ� �� 
	// (typedef �� int* �� pint �� ����) 

	double *ptr_d = &d;


	cout << ptr_x << endl;		// �ּҰ� ����
	cout << *ptr_x << endl;		// �޸� �ּҿ� ����ִ� �� = 5 (int Ÿ��) (de-referincing *)
	cout << typeid(ptr_x).name() << endl;



	cout << ptr_d << endl;
	cout << *ptr_d << endl;

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << "  " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << "  " << sizeof(ptr_d) << endl;



	Something ss;
	Something *ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl;


	return 0; 
}