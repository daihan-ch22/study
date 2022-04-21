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
	// 일단 한번 실행하고 조건을 따짐 

	
	int selection; // 변수는 do 밖에서 선언해야함

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