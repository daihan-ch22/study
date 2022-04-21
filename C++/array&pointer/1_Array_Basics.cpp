#include <iostream>

using namespace std;

// 배열의 사이즈는 컴파일 타임에 고정되야 함. 
// 예를들어 cin 으로 받은 숫자를 배열 사이즈로 하려고 하면 오류남.  
// e.g)  cin >> x;    test[x] ---> 안됨  // cin은 런타임 

struct Rectangle
{

	int length;
	int width; 

};


enum StudentName // enum도 가능 
{
	JACKJACK, // 0 
	DASH,	  // 1
	VIOLET,	  // 2
	NUM_STUDENTS
};

int main1111(void)
{
	
	////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////
	{
		int one_student_score; // 1 variable
		int student_scores[5]; // 5 ints // 0 1 2 3 4

		cout << sizeof(one_student_score) << endl;  // 4 bytes
		cout << sizeof(student_scores) << endl;		// 20 bytes

		one_student_score = 100;

		student_scores[0] = 100;
		student_scores[1] = 80;
		student_scores[2] = 90;
		student_scores[3] = 50;
		student_scores[4] = 0;
		// student_scores[5] = 30;   Runtime Error - 값은 그래도 나옴 

		cout << (student_scores[0] + student_scores[3]) / 2.0 << endl;
	}

	////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////


	cout << "Array in Struct\n";
	cout << "_______________________________________\n\n";

	cout << sizeof(Rectangle) << endl; // 구조체 크기 = 8 byte (4+4)
									   // 항상 변수타입 합이 같이나오진 않음 (Padding)

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;  // 80bytes (4+4) * 10

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;
	
	cout << rect_arr[0].length << endl;
	
	////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////

	cout << "Array Initialisation\n";
	cout << "_______________________________________\n\n";
	
	int my_array[5] = { 1,2,3,4,5 };
	// int my_array[] = {1,2,3,4,5}; 이것도 가능
	// int my_array[] {1,2,3,4,5}; 이것도 가능 c++11
	// int my_array[5] = { 1,2, }; = 1 2 0 0 0 (빈곳은 알아서 채워줌)

	// enum 으로도 사용 가능
	
	cout << my_array[JACKJACK] << endl; 
	cout << my_array[DASH] << endl;
	cout << my_array[VIOLET] << endl;

	int student_scores[NUM_STUDENTS];

	student_scores[JACKJACK] = 0; // 0점 
	student_scores[DASH] = 100; // 100점 





	return 0; 
}