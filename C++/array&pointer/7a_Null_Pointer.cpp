#include <iostream>	


using namespace std;


//  포인터의 위험성 중 쓰레기 주소값이 들어간 경우에 
//  de-referencing (*)을 시도하게 되면 실제로 메모리에 데이터가 잘 담겨져 있는 곳이 
//  아니라 엉뚱한 곳으로 가서 데이터를 찾기 때문에 OS warning 뜸
//
//  이 문제를 방지 하기 위해 Null Pointer를 쓴다 


void doSomething(double *ptr) 
//파라미터로 넘어오는 변수는 여기서 다시 선언이 되고 값이 복사됨. 주소는 다름!!
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
	// double *ptr = 0; 0도 많이 씀 
	
	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);


	 
	cout << "address of Pointer variable in main() " << &ptr << endl;



	return 0;
}