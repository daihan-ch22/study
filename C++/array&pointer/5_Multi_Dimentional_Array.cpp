#include <iostream>	

using namespace std;
//������ �迭 ������ �����δ� 1���� �迭�� �þ�߸� �� 
// ������ �迭 �Ķ���ʹ� ���� �����ͷ� ���� 
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
			} // �޸� �ּҰ� 4�� �þ (int = 4bytes)  
			cout << endl;
		}
	}

	{
		int array[5][4][3];  // 3���� �迭�� ���� - ���� �׷��Ƚ� �� ���� ���� 


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