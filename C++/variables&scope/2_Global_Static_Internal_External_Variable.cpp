#include <iostream>	
#include "MyConst.h"

//
//  �������� (Global Variable)
//	
//	�������� (Static Variable)
//
// 
//	���ο��� (Internal Linkage) 
//	-> // ���� cpp ���� �ȿ����� �������� �۵��ϴ� �������� // 
//	
// 
//	�ܺο��� (External Linkage)
//  -> ���� ������ �ٸ� cpp ���Ͽ��� ��� ���� 
//

int value = 123; // ���� ���� 

using namespace std;

// CONCLUSION
/*https://www.inflearn.com/questions/102747
	* Linking - cpp ���Ϻ��� ������ �� obj ���ϵ��� ��� exe�� ���� 
	
	* int g_x;			 - external linkage (�ʱ�ȭ �ȵ� ��������)
	* static int g_x		 - Internal Linkage
	* const int g_x		 - (x)  -  const �� ������ �ʱ�ȭ �������

	* extern int g_z		 - forward declaration (�ٸ����Ͽ��� �ʱ�ȭ��)
	* extern const int g_z - �ٸ��� �ѱ��������� �ʱ�ȭ 

	* int g_y(1);			 - external linkage �ʱ�ȭ �� ��������
	* static int g_y(1);	 - internal linkage - �ٸ����Ͽ��� ��� �Ұ����� ���� ����
	* const int g_y(1);	 - �Ϲ����� ��� ���� (���� ���� �ȿ����� ��밡��) 

	* extern int g_w(1);	 - ��������/�ʱ�ȭ �� / �ٸ� ���Ͽ��� ��밡�� (�ٸ������� ����)
	* extern const int g_w(1) - ��� / �ʱ�ȭ�� / �ٸ� ���Ͽ��� ��밡�� 

	* ������ �ܺ������� ������ ������ �ѱ��� ������ �ʱ�ȭ��. 
	  �׸��� �ٸ��������� ������ ������ 

	* ������ �ٸ����� ���� �̸��� namespace�� ���� namespace�� ó���ȴ�.

*/


// Static Variable (still local variable)
void doSomething()  
{
	//*****Static ������ ����� �� ���� ���
	//e.g �Լ��� ��� ȣ������ �����.. 
	
	// �׳� int a = 1 �Ͻ� ����� �׻� 2, 2, 2, 2...
	// �Ϲ������� int a �޸� �Ҵ�ް� �� �����γ����� �ݳ�, �ٽ� �Ҵ�..�ݳ�..

	
	 
	// static �� ������ ����ɶ� ""�޸𸮸� ����"". �ʱ�ȭ�� �ѹ��� ��.
	//�׷��� a=1�� �ʱ�ȭ ���� �ʰ� 2,3,4,5...
	// ó�� static ���� ����� �ʱ�ȭ�� ������ �ؾ���. (x)static int a, (O) static int a = 5.
	
	static int a = 1;  // ���� ������ �ᵵ �ȴ�. 
		++a;
	cout << a << endl; 
}


// Internal Linkage 
static int g_a = 1; 


// External Linkage
// extern ���� ���� - doSomething1 �� ��򰡿� �־�� 
extern void doSomething1(void); 
extern int a; 
// int a   linking error �� �� obj ������ �� ������ a�� ������
// �޸𸮸� �� �����ִ�
// �ذ�� -> �ʱ�ȭ�� ���������. a=3 �̷��� 
// �׷��� ������ ���µ�, a �� ��ġ�� ������.
// �ҷ����� ���Ͽ��� extern�� �Ἥ �������� �ϰ� 
// �ش� ������ �ִ� �ٸ� ���Ͽ����� ���� �����ϸ� ��
// e.g) ���⼭�� extern int a ����, test.cpp������ �׳� int a(321); 




int main(void)

{
	
	// Gloval Variables / Local 
	{
		// �������� ���� �ϸ� ������. �ּ������� ����ϴ°� ���� 
		
		cout << value << endl;

		int value = 1; // �������� main �Լ� �ȿ����� �۵� 
		cout << ::value << endl; // �������� ���� �տ� ::����
		cout << value << endl; // �������� value 
	
	}

	
	// Static Variable
	{
		doSomething();
		doSomething();
	}
		
	
	
	// External Linkage
		{
		//doSomething1();
		cout << a << endl;
		}


	// Global Constant 
		{
			cout << "In main cpp file - "
				<< Constants::pi << &Constants::pi << "   " << endl;
			doSomething1();

			//test.cpp �� pi �޸��ּҿ� ���� ������ pi �޸� �ּ� �ٸ�
			// �������� �۾��� �Ҷ� ��� �̷����̸� �޸��� ���� �ſ� Ŀ����

			// ����� pi�� ���� ���� 
			// MyConstants.cpp ���Ͽ��� ���� �ʱ�ȭ
			// �׷� ���� �޸� �ּҸ� �����ϰ� �Ǽ� ȿ�����̰� ��. 



		}

	return 0;
}