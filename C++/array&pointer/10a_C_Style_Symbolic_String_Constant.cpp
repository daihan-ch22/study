#include <iostream>

using namespace std;

// ���ڿ� = ������ �迭 = �����Ϳ� ȣȯ

// C ��Ÿ���� ���ڿ� ��ȣ�� ���


const char *getName() // return Ÿ������ ���� �� �� �ִ�. 
{
	return "jack Jack";
}

int main(void)
{
	{
		// char name[] "jack jack";

		// char name = "jack jack"; - �̰� �ȵ�. 

		// const �� �־�� ��ȣ�� ����� �� �� �ִ�. 

		const char *name = "jack jack";
		const char *name2 = "jack jack";


		cout << name << endl;
		cout << name2 << endl;
		cout << (uintptr_t)name << endl; //name �� name2 �ּҰ� ����.
		cout << (uintptr_t)name << endl;
		// �����Ϸ��� �ΰ��� �����ϱ� ���� �ּҷ� ��� ��� �Ѱ�
		// ������ �ٸ��� �ּҵ� �޶���. 
	}

	{
		////////////////////////////////////////
		// ���� �������� Ư��

		int int_arr[5] = { 1,2,3,4,5 };
		char char_arr[] = "Hello World!";
		const char *name = "Jack Jack";

		cout << int_arr << endl; //�ּҰ� ����
		
		cout << char_arr << endl; // ���ڿ��� ����
		cout << name << endl; // ���ڿ��� ���� 
		// cout ���� ���ڿ��� Ư���� ó���Ѵ�
		// cout ���� ������ �����Ͱ� ������ ���ڿ��� �ƴұ�? ��� �����ϴ°� 



	}

	{

		char c = 'Q';

		cout << &c << endl; // cout�� �ּҰ��� ���� ���ڿ��� �ƴұ� �ϰ� 
		//�����Ϸ��� ������. null ���ڰ� ���Ë� ���� ����ϹǷ� �̻��ϰ� ����. 


		int s = 4;
		cout << &s << endl;

		int result{ 100 };
		
		for (int i = 2; i < 10; i += 1)
		{
			result -= i; 
		}
		cout << result << endl;

	}
	
	return 0;
}