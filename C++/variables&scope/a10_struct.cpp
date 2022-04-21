#include <iostream>
#include <string>

// Strict - 구조체 

//  . member selection operator
using namespace std; 


// struct 내의 변수 초기화 방법
// 1. 구조체 안에서 직접 초기화 height = 3.0 처럼 
// 2. main 안에서 변수 선언을 하고 initialisation 해줌 

struct Person
{
	double height; // height = 3.0 처럼 구조체 내부에서 초기화 가능 
	float  weight;
	int	   age;
	string name; 

	void print() //구조체 안에 함수 삽입 가능 / 아래 함수코드보다 깔끔 
	{
		cout << height << "  " << weight << "  "
			<< age << "   " << name << endl;
	}
};

struct Family
{
	Person sis, mom, dad;
};

//void printPerson(Person per)
//{
//	cout << per.height << "  " << per.weight << "  " << per.age
//		<< "   " << per.name << endl;
//	
//}


// Function also can return Struct 
Person getme()
{
	Person mymy{ 21.0, 1020.0, 20, "dododo" };
	
	return mymy; 
}

int main1(void)
{
	Person me{ 2.0, 100.0, 20, "Dan Dan" };   
	Person me2(me);
	//printPerson(me); 
	me.print();
	me2 = me; // 대입도 가능 

	// 하지만 항상 의도한대로 되지 않을 수 있음 구조체->구조체 클래스->클래스 대입
	//me2.print();

	Person from_func = getme();
	from_func.print();


	


	/* Old Style 
	me.age = 20;
	me.name = "DAN DAN";
	me.height = 2.0;
	me.weight = 100.0; 
	Person mom.... dad.. */


	


	return 0;
}