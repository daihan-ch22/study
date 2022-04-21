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
	//�Է� ���� ������ ���ۿ� ����. E.G abc -> a ���� ���, b,c�� ���� ���
	// ���� cin �� �Ҷ� ���ۿ� �ִ��� �� 

	char c3;
	cin >> c3;
	cout << c3 << "  " << static_cast<int>(c3) << endl;
	
	///////////////////////////////////////////////////

	//     \n �� �ϳ��� ���ڷ� �ۿ� ASKII = 10 
	//		endl = cout ���ۿ� �ִ°� ��� ��� �ϰ� �ٹٲ� 
	//		\n = �ܼ� �ٹٲ�  - \t = tab
	//		\a = 
	//		std::flush => �� �ٲ� ���ϰ� ���ۿ��ִ°� ��� ��� cout << "test" << std::flush 
	//		" �� ����ϰ������ \" 
	
	
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