#include <iostream>
using namespace std; 


int main(void)
{
	int count{ 0 };

loop:
	
		cout << count++  << endl;
		if (count == 13)
		{
			cout << "loop ends.." << endl; 
			goto endloop;
		}
					
	goto loop;

endloop: 


	int outer_count = 1;

	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";

		}
		cout << endl;
		++outer_count;
	}
	 
	/////////////////////DO WHILE
	// �ϴ� �ѹ� �����ϰ� ������ ���� 

	
	int selection; // ������ do �ۿ��� �����ؾ���

	do
	{
		cout << "1.add" << endl;
		cout << "2.sub" << endl;
		cout << "3.mult" << endl;
		cout << "4.div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "your selected " << selection << endl;




	return 0;
}