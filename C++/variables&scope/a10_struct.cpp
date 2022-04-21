#include <iostream>
#include <string>

// Strict - ����ü 

//  . member selection operator
using namespace std; 


// struct ���� ���� �ʱ�ȭ ���
// 1. ����ü �ȿ��� ���� �ʱ�ȭ height = 3.0 ó�� 
// 2. main �ȿ��� ���� ������ �ϰ� initialisation ���� 

struct Person
{
	double height; // height = 3.0 ó�� ����ü ���ο��� �ʱ�ȭ ���� 
	float  weight;
	int	   age;
	string name; 

	void print() //����ü �ȿ� �Լ� ���� ���� / �Ʒ� �Լ��ڵ庸�� ��� 
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
	me2 = me; // ���Ե� ���� 

	// ������ �׻� �ǵ��Ѵ�� ���� ���� �� ���� ����ü->����ü Ŭ����->Ŭ���� ����
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