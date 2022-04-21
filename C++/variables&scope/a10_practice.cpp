#include <iostream>
#include <string>

using namespace std;

struct MyFamilyDetail
{

	string Name;
	int	   age;

	
	void printing()
	{
		cout << "Name:  " << Name << "Age:  " << age << endl; 
	}

};

struct MyFamilyMem
{
	MyFamilyDetail	Dan{ "DAEHAN CHOI", 28 };
	MyFamilyDetail	JiKyung;
	MyFamilyDetail	Siyeon;
	MyFamilyDetail	Byeongu;
	MyFamilyDetail	Dusty;
	

};

int main(void)
{
	MyFamilyMem members;
	MyFamilyDetail print;
	MyFamilyDetail dusty{"Dusty ", 2};

	cout << members.Dan.age << endl; 
	
	dusty.printing();

	return 0; 
}