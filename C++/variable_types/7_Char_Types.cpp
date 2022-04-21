#include <iostream>

int main(void)
{
	using namespace std;

	char c1(65); // c1 = 65 , c1{ 65 }; //
	char c2('A'); // 1 word -> ' ' // String -> " " 

	//cpp-style casting
	cout << c1 << "  " << c2 << "  " << int(c1) //casting 
		<< "  " << int(c2) << "\n\n";

	//c-style casting
	cout << (char)65 << endl;
	cout << int('A') << "\n\n";

	//static casting (Original value in variable won't be changed) 
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl; 
	

	//input casting 
	cout << "Static Casting____ input any char: ";
	cin >> c1; 
	cout << c1 << "  " << static_cast<int>(c1) << endl;

	//if input is more than 1 word ->
	//입력 받은 내용을 버퍼에 저장. E.G abc -> a 먼저 출력, b,c는 버퍼 대기
	// 다음 cin 을 할때 버퍼에 있던게 들어감 

	char c3;
	cin >> c3;
	cout << c3 << "  " << static_cast<int>(c3) << endl;
	
	///////////////////////////////////////////////////

	//     \n 은 하나의 글자로 작용 ASKII = 10 
	//		endl = cout 버퍼에 있는것 모두 출력 하고 줄바꿈 
	//		\n = 단순 줄바꿈  - \t = tab
	//		\a = 
	//		std::flush => 줄 바꿈 안하고 버퍼에있는것 모두 출력 cout << "test" << std::flush 
	//		" 를 출력하고싶을땐 \" 
	
	
	bool bl = 0; 

	for (char askii = 33; askii <= 126; askii++)
	{
		cout << "ASKII char: " << askii << "  Integer: " 
			<< static_cast<int>(askii) << endl;
	
		if (askii == 'P')
		{
			cout << !bl << endl;
		}
	}

	return 0;
}