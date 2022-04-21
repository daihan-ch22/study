#include <iostream>

using namespace std;

//CAUTION
//switch 내에서 변수 선언 가능, 초기화는 불가능
// 초기화 하려면 case 안에서 해야한다
// case 안에서 선언한 변수는 switch 내부 최상단에서 선언한게 됨. 

enum class Colors
{
	BLACK, WHITE, RED, GREEN, BLUE

};



void printColorName(Colors color) //Colors 이름 출력
{
	// 이렇게 하나하나하면 불편. 이때 Switch&Case 사옹


	{
		switch (color)
		{
		case Colors::BLACK:
			cout << "Black";
			break;
		case Colors::WHITE:
			cout << "White";
			break;
		case Colors::RED:
			cout << "Red";
			break;
		case Colors::GREEN:
			cout << "Green";
			break;
		case Colors::BLUE:
			cout << "Blue";
			break;


		}
		cout << endl;
	}
	// 코드를 더 편하게 하기위해 static_cast로 숫자로 사용 가능 
	{
		
		switch (static_cast<int>(color))
		{
		case 0:
			cout << "Black";
			break;
		case 1:
			cout << "White";
			break;
		case 2:
			cout << "Red";
			break;
		case 3:
			cout << "Green";
			break;
		case 4:
			cout << "Blue";
			break;

			// case 숫자 범위를 벗어난 (정의 안된) 케이스는 default 사용 
			// else 같은 느낌? 
		defalt: 
			cout << "Undefined input " << static_cast<int>(color) << endl;

		
		}
		
		cout << endl;
	}
}




int main(void)
{

	printColorName(Colors::BLUE);

	//int x;
	//cin >> x;
	//{
	//	switch (x) // 괄호안에 조건
	//		// 해당 조건에 맞는 케이스 아래코드를 전부실행함. 
	//		// 그래서 break를 써줘야 한다.
	//		// 의도적으로 전부 실행시킬 경우도 있음.
	//	{
	//	case 0:
	//		cout << "Zero";
	//		break;
	//	case 1:
	//		cout << "One";
	//		break;
	//	case 2:
	//		cout << "Two";
	//		break;
	//	}
	//	cout << endl;
	//}


	{
		int p;
		cin >> p;
		switch (static_cast<Colors>(p)) //형 변환으로도 사용 가능 
		{
		case Colors::BLACK:
			cout << "Black";
			break;
		case Colors::WHITE:
			cout << "White";
			break;
		case Colors::RED:
			cout << "Red";
			break;
		case Colors::GREEN:
			cout << "Green";
			break;
		case Colors::BLUE:
			cout << "Blue";
			break;

		default:
			cout << "Undefined number " << p << endl;

		}
		cout << endl;
	}

	return 0;
}