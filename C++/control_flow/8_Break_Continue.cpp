#include <iostream>


// break  ���� �߰�ȣ ���� Ż�� 
// continue �����ؼ� �� �������� ���ư� 

using namespace std;

void BreakorReturn(void)
{
	while (1)
	{
		char ch;
		cin >> ch;
		if (ch == 'b')
			break; 
		
		if (ch == 'r')
			return;
	}
	cout << "Hello\n";
}

int main(void)
{

	//BreakorReturn();

	for (int i{ 0 }; i < 10; ++i)
	{
		if (i % 2 == 0) continue; //�Ʒ� �κ��� �����ϰ� ���� �ٽ�
		
		cout << i << endl;
		
	}


	// ���ѷ��� ���� ���ڸ� �Է¹޾����� Ư�� ���ڿ��� �����¹� 
	
	int count{ 0 };
	bool escape_flag = false;
	while (!escape_flag)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
			escape_flag = true; // break; �� �Ἥ �����ϰ� ��
	}
	
	return 0;
}