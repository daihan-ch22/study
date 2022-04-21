#include <iostream>	

using namespace std;

namespace work1::work11::work111 // c++ 17 
{
	int a = 1;
	void doSomething()
	{
		a += 3;
		cout << "work1: " << a << endl;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
		cout << "work2: " << a << endl;
	}
}

int main(void)
{

	int apple = 5;

	cout << apple << endl;

	{
		int apple = 1; // different apple. 
		cout << apple << endl;
	}

	cout << apple << endl; 


	
	work1::work11::work111::doSomething();

	
	work2::doSomething();


	return 0;
}