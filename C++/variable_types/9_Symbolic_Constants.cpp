#include <iostream>
#include "9_My_Constant.h"


using namespace std;

void printNumber(const int my_num) // 파라미터에 const로 고정하는 경우 많음
{
	// 파라미터 값을 변경 하고싶을땐 
	int n = my_num; // 이런식으로 옮겨서 하는게 좋음 
	

	cout << n << endl; 
}


int main(void)
{
	////////////////////////////////////////////////////////////
	////////////////  ** Const Variable **  ////////////////////

	const double gravity{ 9.8 }; 
	// const 는 항상 앞에/ 밑에서 변수 값 변경 불가 
	// Always need to do initialisation 

	printNumber(123);
	


	// ****   CompileTime vs Runtime constants ?? ****

	const int my_const(123); 
	// 컴파일 할때 이미 my_const의 값 정의 
	//컴파일 할때 결정되는걸 '컴파일 타임 상수'

	int number;
	cin >> number;

	const int special_number(number); 
	//special_number에 어떤 값이 들어갈지는 실행 전까지는 모름  
	//런타임 

	
	
	// 이 둘의 차이를 명확하게 보여줄때 --> c++11   constexpr
	constexpr int my_const1(333); 
	//컴파일 타임에 값이 완전이 결정되는 상수라는 문법 
	//- 컴파일 하면서 체크하겠다는 의미 
	// constexpr int special_number(number) 처럼 런타임에는 사용 불가 
	



	////////////////////////////////////////////////////////////
	///////////////////  ** SYMBOLIC **  ///////////////////////

	int num_item = 123;
	const int price_per_item = 30; 
	// int price = num_item * 30;
	// *30 이런식으로 magic number 를 넣는건 안좋음. 아래처럼 하기 (Symbolic) 
	
	int price = num_item * price_per_item; 
	
	
	
	// 필요한 const 상수들은 한곳에 몰아놓는게 좋음. - 9_My_Constant.h
	// 몰아놓고 한눈에 보기 좋게 설정 + 관리 용의 

	double radius; 
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi; 




	return 0; 
}