#include <iostream>


// break  현재 중괄호 영역 탈출 
// continue 점프해서 윗 조건으로 돌아감 

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
		if (i % 2 == 0) continue; //아랫 부분을 점프하고 위로 다시
		
		cout << i << endl;
		
	}


	// 무한루프 에서 문자를 입력받았을떄 특정 문자에서 나가는법 
	
	int count{ 0 };
	bool escape_flag = false;
	while (!escape_flag)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
			escape_flag = true; // break; 를 써서 간편하게 함
	}
	
	return 0;
}