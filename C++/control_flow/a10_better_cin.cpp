#include <iostream>

//	POINTS
// cin ���� �Է� �ؾߵǴ� �ͺ��� ��� �Է��ϸ� ���ۿ� ���Ƽ� ���� cin�� ��
// �׷��� ���� ����ִ� �۾��� �ʿ���	
// std::cin.ignore(32767, '\n') // 32767 �� ������ ū ����
//
// ���� ������ !!





using namespace std;

int getInt()
{
	while (1) //����ڰ� �� �Է��� �� ���� ���� �ݺ�
	{
		cout << "Enter an interger number : ";
		int x;
		cin >> x;


		// ���� int ������ �Ѿ�� ���� ������ 

		if (std::cin.fail())  //true or false return // fail = true
		{
			std::cin.clear(); // cin �� ���� �÷��� �ʱ�ȭ 
			std::cin.ignore(32767, '\n'); // �Է� ��Ʈ�� �ʱ�ȭ
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
	// ����ڰ� �߸� �Է������� ���� �ٽ� �Է� �ݴ°� ����
	// ���ѷ������� �´� �Է��� ������ Ż���ϴ°� �� ��ǻ�� ������� ����

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