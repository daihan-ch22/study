#include <iostream>

using namespace std;


void printArray(int array[]) // int array[] 가 배열처럼 보이지만 포인터 
{ //void printArray(int *array)랑 같음 



	cout << sizeof(array) << endl;  // 8bytes (pointer size)
	cout << *array << endl;			// 9 (array[0])



	*array = 100; //함수 내에서 선언한게 함수 밖에서도 적용됨 (c style)
				  //cpp에서는 reference를 더 많이 씀 
	
}



struct MyStruct
{
	int array_1[5] = { 9, 7, 5, 3, 1 };

	// array가 class 나 structure 안에 들어있으면 포인터로 강제 변환되지 않음
	// 그냥 그대로 감. 함수랑 다름!
};

void doSomething(MyStruct ms)
{
	cout << "size in struct  " << sizeof(ms.array_1) << endl;
}




int main(void)
{
	// 정적 Array 는 사실 배열이 아니고 포인터임 
	// 
	// 포인터는 주소를 담는다 
	// 5개의 int를 값을 저장하는 메모리의 첫번째 바이트의 주소를 담음 
	// 배열 이름은 그 자체가 배열의 첫번째 원소의 주소가 된다

	int array[5] = { 9, 7, 5, 3, 1 }; 

	cout << array[0] << " " << array[1] << endl;	// 9, 7
	cout << array << endl;							// array[0]주소값
	cout << &(array[0]) << endl;					// array[0]주소값


	cout << *array << endl;							// 9 - array[0]

	//char name[] = "jackjack";
	//cout << *name << endl;		//j     = name[0]

	int *ptr = array;			// Pointer *        
	
	cout << ptr << endl;		// == array[0]주소값
	cout << &ptr << endl;		// 포인터 자체의 주소는 또 다름! 
	cout << *ptr << endl;		// De-referencing * == 9 

	cout << "-------------------sizeArray-----------\n\n";

	cout << sizeof(array) << endl; // 20 ( 4bytes * 5 integers)
	cout << sizeof(ptr) << endl;   // 8 bytes (pointer size)
	printArray(array);			   // 8 bytes (pointer size)
	
	cout << array[0] << "  " << *array << endl; // 100 100 


	cout << "-------------------pointerCalculation-----------\n\n";

	cout << *ptr << "  " << *(ptr + 1) << endl; // 100 7
	// ptr[0]은 함수 내에서 100으로 바꿈.
	// *(ptr + 1) 은 array[1] = 7


	cout << "-------------------Pointer in Struct-----------\n\n";

	MyStruct ms;
	cout << ms.array_1[0] << endl;    // 9 
	cout << sizeof(ms.array_1) << endl;

	doSomething(ms);


	return 0;
}