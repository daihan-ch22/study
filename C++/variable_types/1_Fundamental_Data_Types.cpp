#include <iostream>

int main(void)
{
	//** ����� ������ �׶� �����ϴ°� ���� �߼� ** ����� �ÿ��� �ſ� ����.



	using namespace std;

	bool bValue = true; //���������δ� ���ڷ� ó�� // 
	
	char chValue = 65; // ���������δ� ���ڷ� ó��. (int)chValue = 65
	float fValue = 3.141592f; //float -> �ڿ� f ���� 
	double dValue = 3.141592;

	auto aValue = 3.141592; //Compiler decides variable type. this case - double.
	auto aValue2 = 3.141592f;

	
	//*****INITIALISATION***


	int i = (int)3.1415; // (int) - Casting :: ::Copy Initialisation // ���������� ��ȯ (�޺κ��� ©��)
	//int a(a(1.23)) �� ���� - �޺κ� ©��. ���� ������ ������ ����  
	int a(123); // direct initialization //���� �ʱ�ȭ �� 123 ���� // ��ü���⶧ �ڼ��� ��� 
	int b{ 123 }; // uniform initialization // �ֱٿ��� �̰� �����ϴ� �߼��ε� (���� ��Ȯ�ؾ���)

	//*************************
	
	
	cout << (bValue ? 1 : 0) << endl;
	cout << bValue << endl; // bValue = 1 == TRUE // =0 ==FALSE
	cout << chValue << '\n' << endl;

	//**FLOAT
	cout << fValue << endl;
	cout << dValue << endl; 

	
	
	//** MEMORY SIZE PRINT (

	cout << "*****MEMORY SIZE*****\n";
	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << "\n" << endl;

	cout << sizeof(bool) << endl; //sizeof - ���� Ÿ��(�ΰ� �̻��϶� �����µ�?) / ���� �� �ƹ��ų� ��� ����
	cout << sizeof(bValue) << endl;




	return 0;
}
