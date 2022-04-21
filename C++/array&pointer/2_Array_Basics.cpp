#include <iostream>

// �迭 ��ü�� �̸� ��ü�� ���������� �ּҷ� ���� 
// �迭�� �����ʹ� �پ�ٴ� 



using namespace std; 


// �迭�� �Լ��� �Ķ���ͷ� ���� �� �� ����
// ������ ���ϸ� �迭�� �ƴ�. ������ ��������
// Pointer = �޸� �ּҰ��� ���� �� �ִ� Ÿ���� ���� 
void doSomething(int students_scores[20]) // student_scores = ������
{
	cout << "Inside of Func: " << (size_t)&students_scores << endl; //int�� ����ȯ �ϸ� �����÷ο� ���� size_t
	cout << "Inside of Func[0]: " << (size_t)&students_scores[0] << endl; //student_scores �� ����Ű�� �ּ��� 0��° �ּҰ� 
	cout << students_scores[0] << endl; 
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;


	// 4����Ʈ - x86 // 8����Ʈ - x64
	// ������ ������ (array �� �Ѿ�� �� �ƴ� �����ͷ� �Ѿ��)
	cout << "Size in Func: " << sizeof(students_scores) << endl << endl;

}


void testFunction(char arr_c[5])
{
	cout << "IN THE FUNCTION \n";
	cout << "&arr_c:  " << &arr_c << endl;
	cout << "arr_c:  " << arr_c << endl;
	cout << "arr_c[0]:  " << arr_c[0] << endl;
	cout << "arr_c[5]:	" << arr_c[5] << endl;
}

int main(void) {
	
	const int num_students = 20; 
	// cin >> num_students;

	// �迭 ������ ���Ǹ� �������� �ƴϰ� �Ϸ��� ���� const �� �� �����ؾ��� (������ - short,enum,char ��)
	int students_scores[num_students] = { 1,2,3,4,5 };

	cout << (size_t)students_scores << endl; // �迭 �̸���ü�� �ּҶ� &���� �ּ� ���� 
	cout << "Main: " << (size_t)&students_scores << endl; // student_scores[0] �� ������ 
	//cout << (int) &(students_scores[0]) << endl; // student_score �� ����
	//cout << (int) &(students_scores[1]) << endl; // 4����Ʈ�� �þ
	//cout << (int) &(students_scores[2]) << endl; // 4����Ʈ�� �þ 
	//cout << (int) &(students_scores[3]) << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	cout << "size in Main:  " << sizeof(students_scores) << endl << endl; //80bytes

	
	// �迭�� ��� ���Ҹ� �����ؼ� �������� ���� �ƴ϶� �ּ� �迭�� �ּ� ���� ������
	doSomething(students_scores); 




	cout << "TEST PRACTICE\n";
	cout << "_______________________________________\n\n";

	char arr_c[5] = {'a', 'b', 'c', 'd',  };
	cout << "In main &arr_c:  " << &arr_c << endl;
	cout << "In main arr_c[0]: " << arr_c[0] << endl << endl;
	testFunction(arr_c);
	
	return 0;
}