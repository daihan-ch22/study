#include <iostream>	
#include "MyConst.h"

//
//  전역변수 (Global Variable)
//	
//	정적변수 (Static Variable)
//
// 
//	내부연결 (Internal Linkage) 
//	-> // 개별 cpp 파일 안에서만 전역으로 작동하는 전역변수 // 
//	
// 
//	외부연결 (External Linkage)
//  -> 전역 변수를 다른 cpp 파일에서 사용 가능 
//

int value = 123; // 전역 변수 

using namespace std;

// CONCLUSION
/*https://www.inflearn.com/questions/102747
	* Linking - cpp 파일별로 컴파일 된 obj 파일들을 엮어서 exe로 만듬 
	
	* int g_x;			 - external linkage (초기화 안된 전역변수)
	* static int g_x		 - Internal Linkage
	* const int g_x		 - (x)  -  const 는 무조건 초기화 해줘야함

	* extern int g_z		 - forward declaration (다른파일에서 초기화함)
	* extern const int g_z - 다른곳 한군데에서만 초기화 

	* int g_y(1);			 - external linkage 초기화 된 전역변수
	* static int g_y(1);	 - internal linkage - 다른파일에서 사용 불가능한 전역 변수
	* const int g_y(1);	 - 일반적인 상수 선언 (같은 파일 안에서만 사용가능) 

	* extern int g_w(1);	 - 전역변수/초기화 됨 / 다른 파일에서 사용가능 (다른데에선 선언만)
	* extern const int g_w(1) - 상수 / 초기화됨 / 다른 파일에서 사용가능 

	* 변수를 외부적으로 가져다 쓰려면 한군데 에서만 초기화함. 
	  그리고 다른데에서는 변수를 선언만함 

	* 파일이 다르더라도 같은 이름의 namespace는 같은 namespace로 처리된다.

*/


// Static Variable (still local variable)
void doSomething()  
{
	//*****Static 변수는 디버깅 시 많이 사용
	//e.g 함수가 몇번 호출됬는지 세어볼때.. 
	
	// 그냥 int a = 1 일시 결과는 항상 2, 2, 2, 2...
	// 일반적으로 int a 메모리 할당받고 블럭 밖으로나가면 반납, 다시 할당..반납..

	
	 
	// static 은 변수가 선언될때 ""메모리를 재사용"". 초기화는 한번만 함.
	//그래서 a=1로 초기화 되지 않고 2,3,4,5...
	// 처음 static 변수 선언시 초기화를 무조건 해야함. (x)static int a, (O) static int a = 5.
	
	static int a = 1;  // 전역 변수로 써도 된다. 
		++a;
	cout << a << endl; 
}


// Internal Linkage 
static int g_a = 1; 


// External Linkage
// extern 생략 가능 - doSomething1 이 어딘가에 있어용 
extern void doSomething1(void); 
extern int a; 
// int a   linking error 가 남 obj 파일을 다 뒤져도 a를 못참음
// 메모리를 안 갖고있다
// 해결법 -> 초기화를 시켜줘야함. a=3 이런식 
// 그래도 에러가 나는데, a 가 겹치기 때문임.
// 불러오는 파일에는 extern을 써서 변수선언 하고 
// 해당 변수가 있는 다른 파일에서는 변수 선언만하면 됨
// e.g) 여기서는 extern int a 선언, test.cpp에서는 그냥 int a(321); 




int main(void)

{
	
	// Gloval Variables / Local 
	{
		// 전역변수 남발 하면 안좋다. 최소한으로 사용하는게 좋음 
		
		cout << value << endl;

		int value = 1; // 지역변수 main 함수 안에서만 작동 
		cout << ::value << endl; // 전역변수 사용시 앞에 ::붙임
		cout << value << endl; // 지역변수 value 
	
	}

	
	// Static Variable
	{
		doSomething();
		doSomething();
	}
		
	
	
	// External Linkage
		{
		//doSomething1();
		cout << a << endl;
		}


	// Global Constant 
		{
			cout << "In main cpp file - "
				<< Constants::pi << &Constants::pi << "   " << endl;
			doSomething1();

			//test.cpp 의 pi 메모리주소와 현재 파일의 pi 메모리 주소 다름
			// 여러개의 작업을 할때 계속 이런식이면 메모리의 낭비가 매우 커진다

			// 헤더의 pi는 선언만 해줌 
			// MyConstants.cpp 파일에서 변수 초기화
			// 그럼 같은 메모리 주소를 참조하게 되서 효율적이게 됨. 



		}

	return 0;
}