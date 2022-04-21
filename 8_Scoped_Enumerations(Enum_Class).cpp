#include <iostream>

// Scoped Enumerations (Enum Class) 
// 영역 제한 열거형 (영거형 클래스)
// enum struct 도 있는데 class로 더 많이 씀
using namespace std;

int main(void)
{

	enum Color1
	{
		RED1, BLUE1
	};
	enum Fruit1
	{
		BANANA1, APPLE1
	};

	Color1 color1 = RED1;
	Fruit1 fruit1 = BANANA1;
	if (color1 == fruit1) cout << "(1)Color is fruit?" << endl;
	// RED = 0, BANANA = 0 :: Integer로 비교함 
	// 이렇게 되면 실수 가능성이 있기에 enum class 를 사용함.
	// namespace로 묶어주는거랑 비슷함.

	enum class Color
	{
		RED, BLUE
	};
	enum class Fruit
	{
		BANANA, APPLE
	};
	Color color = Color::RED;
	Color color2 = Color::BLUE;
	Fruit fruit = Fruit::BANANA;


	// Compiler only can compare enums under same enum class. 
	// (O) red == blue //  (X) blue == banana
	//if (color == fruit) - ERROR
		//cout << "Color is fruit? " << endl; 
	
	if (color == color2)
		cout << "Same Color" << endl;



	return 0;
}