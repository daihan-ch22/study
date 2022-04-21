#include <iostream>	

using namespace std;
//다차원 배열 이지만 실제로는 1차원 배열을 늘어뜨린 것 
// 다차원 배열 파라미터는 보통 포인터로 넣음 
int main(void)
{
	const int num_rows = 3;
	const int num_colums = 5;

	
	{
		int array[num_rows][num_colums] =
		{
			{1, 2, 3, 4, 5},		// row 0
			{6, 7, 8, 9, 10},		// row 1
			{11, 12, 13, 14, 15}	// row 2
		};

		for (int row = 0; row < num_rows; ++row)
		{
			for (int col = 0; col < num_colums; ++col)
			{
				cout << (unsigned int)&array[row][col] << "\t";
			} // 메모리 주소가 4씩 늘어남 (int = 4bytes)  
			cout << endl;
		}
	}

	{
		int array[5][4][3];  // 3차원 배열도 가능 - 보통 그래픽스 때 많이 쓰임 


	}

	int array[2][2] =
	{
		{1, 2},
		{4, 5}
	};
	
	int array2[2][2] =
	{
		{2, 3},
		{4, 5}
	};
	int result = 0;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			result = array[i][j] * array2[i][j];
			cout << result << "   ";
		}
		cout << endl;
	}



	return 0;
}