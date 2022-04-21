#include <iostream>
#include <string>
#include <limits>
// C 언어 스타일의 배열 문자열


using namespace std;

int main(void)
{
	{//////////////////////////////
		// 6 글자지만 배열크기는 7
		// " " 마지막에 NULL 문자 들어가있음 - 문자의 마지막 의미 
		char myString[] = "string";
	}
	

	{//////////////////////////////
		char myString[255];

		cin.getline(myString, 255);

		//myString[0] = 'A';
		//myString[4] = '\0'; // NULL character 이 뒤로는 출력 안됨

		//cout << myString << endl; // 입력에 띄어쓰기 있으면 그 뒤로 출력 X

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


		// strcat() - 한 문자열 뒤에 다른 문자열 붙여줌
		// strcmp() - 두 문자열이 같은지 비교 

		
		strcat_s(dest, source);
		
		// strcmp(dest, source); // 참 = 0 // 거짓 -1

		cout << "Source: " << source << endl;
		cout << "Dest:   " << dest << endl;
	}

	return 0; 
}