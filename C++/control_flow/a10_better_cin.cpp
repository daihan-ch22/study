#include <iostream>

//	POINTS
// cin 에서 입력 해야되는 것보다 길게 입력하면 버퍼에 남아서 다음 cin에 들어감
// 그래서 버퍼 비워주는 작업이 필요함	
// std::cin.ignore(32767, '\n') // 32767 은 적당히 큰 숫자
//
// 계산기 만들어보기 !!





using namespace std;

int getInt()
{
	while (1) //사용자가 잘 입력할 때 까지 무한 반복
	{
		cout << "Enter an interger number : ";
		int x;
		cin >> x;


		// 만약 int 범위를 넘어서는 값을 받으면 

		if (std::cin.fail())  //true or false return // fail = true
		{
			std::cin.clear(); // cin 의 상태 플래그 초기화 
			std::cin.ignore(32767, '\n'); // 입력 스트림 초기화
			cout << "Invalid Number, plz try again " << endl;

		}
		else // !fail is false 
		{
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
}


char getOperator()
{
	// 사용자가 잘못 입력했을때 마다 다시 입력 닫는것 보단
	// 무한루프에서 맞는 입력을 했을때 탈출하는게 더 컴퓨터 사고적인 접근

	while (1)
	{
		cout << "Enter an operator (+, -, *, /, %) : "; //
		char op;
		cin >> op;
		std::cin.ignore(32767, '\n');

		if (op == '+' || op == '-' || op == '*' || op == '/')
			return op;

		else
			cout << "Invalid operator, please try again" << endl;
	}
}

void printResult(int x, char op, int y)
{
	/*if (op == '+') cout << x + y << endl;

	else if (op == '-') cout << x - y << endl;

	else
	{
		cout << "Invalid Operator" << endl;
	}*/

	switch (op)
	{
	case '+':
		cout << x + y << endl;
		break;

	case '-':
		cout << x - y << endl;
		break;

	case '*':
		cout << x * y << endl;
		break;

	case '/':
		cout << x / y << endl;
		break;

	case '%':
		cout << x % y << endl;
		break; 

	defalt:
		cout << "Invalid Operator" << endl;

	}

}

int main(void)
{

	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);



	return 0;
}