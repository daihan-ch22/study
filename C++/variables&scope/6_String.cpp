#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(void)
{
	//string -> ����� ���� �ڷ��� 
	//#include <string> 


	const char my_strs[]("Hello, World");
	const string my_hello{ "Hello, World" };

	string my_ID{ "123" };

	cout << my_strs << endl;
	cout << my_hello << endl;



	cout << "any num?: ";
	int m_num;
	cin >> m_num;
	//std::cin.ignore(32767, '\n');
	// ����(\n)�� ���������� 32767������ ������ ���ڸ� ����
	// 2byte integer signed �� = 32767
	// magic number�� �Ⱦ��°� �����Ƿ� �Ʒ��� ���� ��. 
	// ���߿� �̷��� ���̺귯���� ���� ���ϰ� �� �� ���� 
	
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//streamsize -> ����ũ�� 



	cout << "Your Name? :  ";
	string name;
	//cin >> name;
	std::getline(std::cin, name); //enter ���������� �� �Է¹��� 

	// DAN DAN �� �Է������� age������ DAN DAN���� ���´�. 
	// cin �� ��ĭ�� ������ �� �޾Ҵ� ��� �����ؼ� �ι�° cin ���� �Ѿ
	// ���ۿ��ִٰ� 2��° cin���� �Ѿ 
	// string �Է¹����� getline�� ����.

	cout << "Your age? :  ";
	string age;
	//cin >> age;
	std::getline(std::cin, age);
	cout << name << " " << age << endl;



	//// String combine 
	string a("Hello, ");
	string b("World!");
	string hw = (a + b); // append ���ڿ� ���ϱ� 
	hw += "I'm good. gdfutu. \n";
	cout << hw << endl;
	cout << hw.length() << endl; // .length() ���ڿ� ���� 


	return 0;
}