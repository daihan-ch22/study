#include <iostream>	

//������ ����� �迭 �ε���

using namespace std;

int main(void)
{


	int value{ 7 };

	int *ptr{ &value };

	cout << ptr << endl; // 16���� �ּ� 
	cout << uintptr_t(ptr-1) << endl;  // uintptr_t()  // casting ���� ������ �����ͷ� ��ȯ 
	cout << uintptr_t(ptr) << endl; 
	cout << uintptr_t(ptr+1) << endl;  // data ����� ���缭 �̵� - int = 4bytes
	cout << uintptr_t(ptr+2) << endl;
	// 4�� �þ (int�� 4bytes �̹Ƿ� +1 �� ��ĭ �̵��� �� (4bytes ��)
	// double �� 8bytes �� �þ 

	///////////////////////////////////////////////////////////


	int array[] = { 9,7,5,3,1 };

	ptr = array;

	for (int i = 0; i <= 4; ++i)
	{
		//cout << array[i] << " " << (uintptr_t) & array[i] << endl; 
		cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
	}  // int 5���� ������ �ִ� ��� // �ּҰ� �̿�������. int������ 4����Ʈ�� ���̳�.


	///////////////////////////////////////////////////////////
	////////////////////strings///////////
	cout << "----------------------------------------------\n\n";

	char name[] = "Jack jack";

	const int n_name = sizeof(name) / sizeof(char); // ���� ���� ���ϱ� 
	// ��ü �޸� ũ�� / �ڷ��� 

	for (int i = 0; i < n_name; ++i)
	{
		cout << *(name + i);// �迭�� �����ͷ� �۵��ϴ� ���굵 ��. 
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