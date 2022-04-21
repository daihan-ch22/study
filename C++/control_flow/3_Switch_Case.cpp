#include <iostream>

using namespace std;

//CAUTION
//switch ������ ���� ���� ����, �ʱ�ȭ�� �Ұ���
// �ʱ�ȭ �Ϸ��� case �ȿ��� �ؾ��Ѵ�
// case �ȿ��� ������ ������ switch ���� �ֻ�ܿ��� �����Ѱ� ��. 

enum class Colors
{
	BLACK, WHITE, RED, GREEN, BLUE

};



void printColorName(Colors color) //Colors �̸� ���
{
	// �̷��� �ϳ��ϳ��ϸ� ����. �̶� Switch&Case ���


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
	// �ڵ带 �� ���ϰ� �ϱ����� static_cast�� ���ڷ� ��� ���� 
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

			// case ���� ������ ��� (���� �ȵ�) ���̽��� default ��� 
			// else ���� ����? 
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
	//	switch (x) // ��ȣ�ȿ� ����
	//		// �ش� ���ǿ� �´� ���̽� �Ʒ��ڵ带 ���ν�����. 
	//		// �׷��� break�� ����� �Ѵ�.
	//		// �ǵ������� ���� �����ų ��쵵 ����.
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
		switch (static_cast<Colors>(p)) //�� ��ȯ���ε� ��� ���� 
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