#include <iostream>	

using namespace std;


void printArray(const int array[], const int length) // 실수로 다른숫자 대입 방지 const
{
	for (int index = 0; index < length; ++index)
		cout << array[index] << "  ";

	cout << endl;
}

int main(void)
{

	cout << "SELCTION SORT\n";
	cout << "------------------------------------------\n\n";

	const int length = 5;

	int array[length] = { 3, 5, 2, 1, 4 };

	for (int startIndex = 0; startIndex < length - 1; ++startIndex) // 마지막에는 안찾아도 되니 -1 
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex) //현재 위치에서 하나 더 간 위치부터 4개를 찾아야하니 + 1 그리고 끝까지 다 뒤짐
		{
			if (array[smallestIndex] > array[currentIndex])
			{
				smallestIndex = currentIndex;
			}
		}

		//SWAP two values in the array
		// std::swap(array[smallestIndex], array[startIndex]);
		{
			int temp = array[smallestIndex];
			array[smallestIndex] = array[startIndex];
			array[startIndex] = temp;

		}

		printArray(array, length);
		
	}
	
	cout << "\n\n";
	
	
	{ //내가 짜본것 
		cout << "MYSELF\n";
		cout << "------------------------------------------\n\n";
		const int length = 5;
		int array[length] = { 3, 5, 2, 1, 4 };

		cout << "current array: ";
		printArray(array, length);

		int swap = 0;
		for (int i = 0; i < length; i++)
		{
			for (int j = 0; j < length; j++)
			{


				if (array[i] < array[j])
				{
					swap = array[i];
					array[i] = array[j];
					array[j] = swap;

				}
				//cout << array[j] << "  ";
			}
			printArray(array, length);
			
		}

		// 5 4 3 2 1  
		/*for (int i = 0; i < length; i++)
		{
			for (int j = 0; j < length; j++)
			{
				if (array[i] > array[j])
				{
					swap = array[j];
					array[j] = array[i];
					array[i] = swap;
				}
				cout << array[j] << "  ";
			}
			cout << endl;
		}*/
	}


	return 0;
}