#include <iostream>

using namespace std;


void printArray(int array[]) // int array[] �� �迭ó�� �������� ������ 
{ //void printArray(int *array)�� ���� 



	cout << sizeof(array) << endl;  // 8bytes (pointer size)
	cout << *array << endl;			// 9 (array[0])



	*array = 100; //�Լ� ������ �����Ѱ� �Լ� �ۿ����� ����� (c style)
				  //cpp������ reference�� �� ���� �� 
	
}



struct MyStruct
{
	int array_1[5] = { 9, 7, 5, 3, 1 };

	// array�� class �� structure �ȿ� ��������� �����ͷ� ���� ��ȯ���� ����
	// �׳� �״�� ��. �Լ��� �ٸ�!
};

void doSomething(MyStruct ms)
{
	cout << "size in struct  " << sizeof(ms.array_1) << endl;
}




int main(void)
{
	// ���� Array �� ��� �迭�� �ƴϰ� �������� 
	// 
	// �����ʹ� �ּҸ� ��´� 
	// 5���� int�� ���� �����ϴ� �޸��� ù��° ����Ʈ�� �ּҸ� ���� 
	// �迭 �̸��� �� ��ü�� �迭�� ù��° ������ �ּҰ� �ȴ�

	int array[5] = { 9, 7, 5, 3, 1 }; 

	cout << array[0] << " " << array[1] << endl;	// 9, 7
	cout << array << endl;							// array[0]�ּҰ�
	cout << &(array[0]) << endl;					// array[0]�ּҰ�


	cout << *array << endl;							// 9 - array[0]

	//char name[] = "jackjack";
	//cout << *name << endl;		//j     = name[0]

	int *ptr = array;			// Pointer *        
	
	cout << ptr << endl;		// == array[0]�ּҰ�
	cout << &ptr << endl;		// ������ ��ü�� �ּҴ� �� �ٸ�! 
	cout << *ptr << endl;		// De-referencing * == 9 

	cout << "-------------------sizeArray-----------\n\n";

	cout << sizeof(array) << endl; // 20 ( 4bytes * 5 integers)
	cout << sizeof(ptr) << endl;   // 8 bytes (pointer size)
	printArray(array);			   // 8 bytes (pointer size)
	
	cout << array[0] << "  " << *array << endl; // 100 100 


	cout << "-------------------pointerCalculation-----------\n\n";

	cout << *ptr << "  " << *(ptr + 1) << endl; // 100 7
	// ptr[0]�� �Լ� ������ 100���� �ٲ�.
	// *(ptr + 1) �� array[1] = 7


	cout << "-------------------Pointer in Struct-----------\n\n";

	MyStruct ms;
	cout << ms.array_1[0] << endl;    // 9 
	cout << sizeof(ms.array_1) << endl;

	doSomething(ms);


	return 0;
}