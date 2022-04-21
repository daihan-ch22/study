#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(void)
{
	//string -> 사용자 정의 자료형 
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
	// 엔터(\n)를 만날때까지 32767까지의 길이의 문자를 무시
	// 2byte integer signed 값 = 32767
	// magic number는 안쓰는게 좋으므로 아래와 같이 함. 
	// 나중엔 이런걸 라이브러리로 만들어서 편하게 쓸 수 있음 
	
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//streamsize -> 버퍼크기 



	cout << "Your Name? :  ";
	string name;
	//cin >> name;
	std::getline(std::cin, name); //enter 누를때까지 쭉 입력받음 

	// DAN DAN 을 입력헀을때 age에서도 DAN DAN으로 나온다. 
	// cin 은 빈칸이 있으면 다 받았다 라고 생각해서 두번째 cin 으로 넘어감
	// 버퍼에있다가 2번째 cin으로 넘어감 
	// string 입력받을떈 getline을 쓴다.

	cout << "Your age? :  ";
	string age;
	//cin >> age;
	std::getline(std::cin, age);
	cout << name << " " << age << endl;



	//// String combine 
	string a("Hello, ");
	string b("World!");
	string hw = (a + b); // append 문자열 더하기 
	hw += "I'm good. gdfutu. \n";
	cout << hw << endl;
	cout << hw.length() << endl; // .length() 문자열 길이 


	return 0;
}