#include <iostream>

using namespace std;

// �迭�� ������� ������ Ÿ�ӿ� �����Ǿ� ��. 
// ������� cin ���� ���� ���ڸ� �迭 ������� �Ϸ��� �ϸ� ������.  
// e.g)  cin >> x;    test[x] ---> �ȵ�  // cin�� ��Ÿ�� 

struct Rectangle
{

	int length;
	int width; 

};


enum StudentName // enum�� ���� 
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
		// student_scores[5] = 30;   Runtime Error - ���� �׷��� ���� 

		cout << (student_scores[0] + student_scores[3]) / 2.0 << endl;
	}

	////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////


	cout << "Array in Struct\n";
	cout << "_______________________________________\n\n";

	cout << sizeof(Rectangle) << endl; // ����ü ũ�� = 8 byte (4+4)
									   // �׻� ����Ÿ�� ���� ���̳����� ���� (Padding)

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
	// int my_array[] = {1,2,3,4,5}; �̰͵� ����
	// int my_array[] {1,2,3,4,5}; �̰͵� ���� c++11
	// int my_array[5] = { 1,2, }; = 1 2 0 0 0 (����� �˾Ƽ� ä����)

	// enum ���ε� ��� ����
	
	cout << my_array[JACKJACK] << endl; 
	cout << my_array[DASH] << endl;
	cout << my_array[VIOLET] << endl;

	int student_scores[NUM_STUDENTS];

	student_scores[JACKJACK] = 0; // 0�� 
	student_scores[DASH] = 100; // 100�� 





	return 0; 
}