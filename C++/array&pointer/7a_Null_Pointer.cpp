#include <iostream>	


using namespace std;


//  �������� ���輺 �� ������ �ּҰ��� �� ��쿡 
//  de-referencing (*)�� �õ��ϰ� �Ǹ� ������ �޸𸮿� �����Ͱ� �� ����� �ִ� ���� 
//  �ƴ϶� ������ ������ ���� �����͸� ã�� ������ OS warning ��
//
//  �� ������ ���� �ϱ� ���� Null Pointer�� ���� 


void doSomething(double *ptr) 
//�Ķ���ͷ� �Ѿ���� ������ ���⼭ �ٽ� ������ �ǰ� ���� �����. �ּҴ� �ٸ�!!
{
	cout << "address of Pointer variable in doSomething() " << &ptr << endl;
	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing." << endl;
	}
}




int main(void)
{

	double *ptr = nullptr; // modern c++
	// double *ptr = 0; 0�� ���� �� 
	
	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);


	 
	cout << "address of Pointer variable in main() " << &ptr << endl;



	return 0;
}