#include <iostream>
#include <typeinfo>

// Enumerated Types - 열거형 

//열거형(enum)은 같은 종류의 무언가를 여러개 만들어야 하거나 
//상태 같은것을 직관적으로 보며 관리하고, 사용할 수 있는 장점이 있다.





/* 게임에서 데미지를 받았을때 - 칼-1 망치-2 / 근데 칼은 0 망치는1 이런식
 으로 외우기 힘들 수 있기 때문에 열거형 사용 
int computeDamage(int weapon_id)
{
	if (weapon_id == 0) // sword
	{
		return 1;
	}
	if (weapon_id == 1) // hammer
	{
		return 2;
	}
}*/

// user-defined data types
// 괄호 마지막에 ; 
// 쭉 나열하기때문에 열거형
enum Colour 
{
	// 값 할당 가능
	// -10, -9, -8.... 값 할당 안하면 0부터 시작 0 1 2 3.. .
	COLOUR_BLACK = -10, 
	COLOUR_RED,	   
	COLOUR_BLUE,  
	COLOUR_GREEN,  
	COLOUR_SKYBLUE 
};


//enum Feeling //내용물은 ENUM끼리 안겹치게 
//{
//	HAPPY,
//	JOY,
//	TIRED,
//	BLUE
//};

using namespace std;
int main()
{
	
	int color_id = COLOUR_BLUE;
	

	//정수형 처럼 쓸 수는 없음.
	//integer를 바로 넣을수 없음
	// Casting 해야함
	// Colour my_color = 4; 
	Colour my_color = static_cast<Colour>(4);
	Colour house(COLOUR_BLUE);
	Colour apple{ COLOUR_RED };

	cout << house << apple;

	//cin 으로 받을순 없고 우회 해서 받아야함. 
	int in_num;
	cin >> in_num;

	if (in_num == static_cast<Colour>(4))
		my_color = static_cast<Colour>(4);

	cout << in_num;
	



	return 0;
}
