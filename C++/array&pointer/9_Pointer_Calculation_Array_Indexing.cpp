#include <iostream>	

//포인터 연산과 배열 인덱싱

using namespace std;

int main(void)
{


	int value{ 7 };

	int *ptr{ &value };

	cout << ptr << endl; // 16진수 주소 
	cout << uintptr_t(ptr-1) << endl;  // uintptr_t()  // casting 없이 정수를 포인터로 변환 
	cout << uintptr_t(ptr) << endl; 
	cout << uintptr_t(ptr+1) << endl;  // data 사이즈에 맞춰서 이동 - int = 4bytes
	cout << uintptr_t(ptr+2) << endl;
	// 4씩 늘어남 (int가 4bytes 이므로 +1 은 한칸 이동을 뜻 (4bytes 씩)
	// double 은 8bytes 씩 늘어남 

	///////////////////////////////////////////////////////////


	int array[] = { 9,7,5,3,1 };

	ptr = array;

	for (int i = 0; i <= 4; ++i)
	{
		//cout << array[i] << " " << (uintptr_t) & array[i] << endl; 
		cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
	}  // int 5개가 나란히 있는 모습 // 주소가 이웃해있음. int사이즈 4바이트씩 차이남.


	///////////////////////////////////////////////////////////
	////////////////////strings///////////
	cout << "----------------------------------------------\n\n";

	char name[] = "Jack jack";

	const int n_name = sizeof(name) / sizeof(char); // 원소 개수 구하기 
	// 전체 메모리 크기 / 자료형 

	for (int i = 0; i < n_name; ++i)
	{
		cout << *(name + i);// 배열은 포인터로 작동하니 연산도 됨. 
	}
	cout << "\n\n";


	char my_name[] = "DAEHAN CHOI";
	const int num_elements = sizeof(my_name) / sizeof(my_name[0]);
	
	char *ptr_name = my_name;


	while (*ptr_name != '\0')
	{
		cout << *ptr_name << endl;
		
		
		ptr_name++;

		//if (*ptr_name == '\0') break;

		
	}


	return 0;
}