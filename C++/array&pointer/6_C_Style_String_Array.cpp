#include <iostream>
#include <string>
#include <limits>
// C ��� ��Ÿ���� �迭 ���ڿ�


using namespace std;

int main(void)
{
	{//////////////////////////////
		// 6 �������� �迭ũ��� 7
		// " " �������� NULL ���� ������ - ������ ������ �ǹ� 
		char myString[] = "string";
	}
	

	{//////////////////////////////
		char myString[255];

		cin.getline(myString, 255);

		//myString[0] = 'A';
		//myString[4] = '\0'; // NULL character �� �ڷδ� ��� �ȵ�

		//cout << myString << endl; // �Է¿� ���� ������ �� �ڷ� ��� X

		int ix = 0;
		while (1)
		{
			if (myString[ix] == '\0') break;

			cout << myString[ix] << " " << (int)myString[ix] << endl;
			++ix;
		}
	}


	{	// Array Copy - C style

		char source[] = "Copy This!";
		char dest[50];
		strcpy_s(dest, 50, source);  // source -> dest

		cout << "Source: " << source << endl;
		cout << "Dest:   " << dest << endl;


		// strcat() - �� ���ڿ� �ڿ� �ٸ� ���ڿ� �ٿ���
		// strcmp() - �� ���ڿ��� ������ �� 

		
		strcat_s(dest, source);
		
		// strcmp(dest, source); // �� = 0 // ���� -1

		cout << "Source: " << source << endl;
		cout << "Dest:   " << dest << endl;
	}

	return 0; 
}