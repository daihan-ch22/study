#include <iostream>

int main(void)
{
	//** 사용할 변수는 그때 선언하는게 요즘 추세 ** 디버깅 시에도 매우 편함.



	using namespace std;

	bool bValue = true; //내부적으로는 숫자로 처리 // 
	
	char chValue = 65; // 내부적으로는 숫자로 처리. (int)chValue = 65
	float fValue = 3.141592f; //float -> 뒤에 f 붙임 
	double dValue = 3.141592;

	auto aValue = 3.141592; //Compiler decides variable type. this case - double.
	auto aValue2 = 3.141592f;

	
	//*****INITIALISATION***


	int i = (int)3.1415; // (int) - Casting :: ::Copy Initialisation // 정수형으로 변환 (뒷부분은 짤림)
	//int a(a(1.23)) 도 가능 - 뒷부분 짤림. 경고는 나지만 컴파일 가능  
	int a(123); // direct initialization //변수 초기화 후 123 대입 // 객체지향때 자세히 배움 
	int b{ 123 }; // uniform initialization // 최근에는 이걸 권장하는 추세인듯 (문법 정확해야함)

	//*************************
	
	
	cout << (bValue ? 1 : 0) << endl;
	cout << bValue << endl; // bValue = 1 == TRUE // =0 ==FALSE
	cout << chValue << '\n' << endl;

	//**FLOAT
	cout << fValue << endl;
	cout << dValue << endl; 

	
	
	//** MEMORY SIZE PRINT (

	cout << "*****MEMORY SIZE*****\n";
	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << "\n" << endl;

	cout << sizeof(bool) << endl; //sizeof - 변수 타입(두개 이상일땐 씹히는듯?) / 변수 명 아무거나 사용 가능
	cout << sizeof(bValue) << endl;




	return 0;
}
