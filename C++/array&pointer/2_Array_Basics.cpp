#include <iostream>

// 배열 자체는 이름 자체가 내부적으로 주소로 나옴 
// 배열과 포인터는 붙어다님 



using namespace std; 


// 배열을 함수의 파라미터로 넣을 수 도 있음
// 엄밀히 말하면 배열이 아님. 문법상 포인터임
// Pointer = 메모리 주소값을 담을 수 있는 타입의 변수 
void doSomething(int students_scores[20]) // student_scores = 포인터
{
	cout << "Inside of Func: " << (size_t)&students_scores << endl; //int로 형변환 하면 오버플로우 나서 size_t
	cout << "Inside of Func[0]: " << (size_t)&students_scores[0] << endl; //student_scores 가 가르키는 주소의 0번째 주소값 
	cout << students_scores[0] << endl; 
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;


	// 4바이트 - x86 // 8바이트 - x64
	// 포인터 사이즈 (array 로 넘어온 게 아님 포인터로 넘어옴)
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

	// 배열 사이즈 정의를 숫자형이 아니게 하려면 위의 const 로 꼭 정의해야함 (정수형 - short,enum,char 등)
	int students_scores[num_students] = { 1,2,3,4,5 };

	cout << (size_t)students_scores << endl; // 배열 이름자체가 주소라 &안찍어도 주소 나옴 
	cout << "Main: " << (size_t)&students_scores << endl; // student_scores[0] 과 같은값 
	//cout << (int) &(students_scores[0]) << endl; // student_score 과 같음
	//cout << (int) &(students_scores[1]) << endl; // 4바이트씩 늘어남
	//cout << (int) &(students_scores[2]) << endl; // 4바이트씩 늘어남 
	//cout << (int) &(students_scores[3]) << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	cout << "size in Main:  " << sizeof(students_scores) << endl << endl; //80bytes

	
	// 배열의 모든 원소를 복사해서 가져오는 것이 아니라 주소 배열의 주소 값을 가져옴
	doSomething(students_scores); 




	cout << "TEST PRACTICE\n";
	cout << "_______________________________________\n\n";

	char arr_c[5] = {'a', 'b', 'c', 'd',  };
	cout << "In main &arr_c:  " << &arr_c << endl;
	cout << "In main arr_c[0]: " << arr_c[0] << endl << endl;
	testFunction(arr_c);
	
	return 0;
}