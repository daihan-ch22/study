#include <iostream>
#include <typeinfo>

using namespace std;

//	변수명 앞 &: address-of operator
//  
//  Pointer = 메모리 주소를 담는 (변수) 
//
//  de-reference operator (*)
//	-> 포인터가 저쪽 주소에 가면 이 데이터가 있어요 라고 간접적으로 가리키기만
//	   하는 것에 대해서 "그럼 내가 거기에 진짜 뭐가있는지 내가 들여다 볼게"
//     하고 직접적으로 접근한다는 의미 
// 
// 
//  pointer는 reference의 일종 - c++ 에서는 reference 가 따로 있음 
// 
//  *(&x) -> 결국 x값만 보임 
//
// 
//	Pointer는 메모리 주소를 갖기 때문에 타입 딱히 상관 없음
//	포인터 자체의 사이즈는 동일 8바이트 (주소사이즈) (32비트 - 4byte / 64비트 - 8byte)
// 
// 
//	포인터가 type을 알고 있어야 하는 이유는 de-referencing 할때 
//  void, double, float 등 뭘로 가져올지 나타내주기 위함
// 
// 
// 
//	함수가 return 타입으로 포인터를 갖을 수도 있음. ( 파라미터로도 포인터 가능) - 다음강의
//
//
//	1. 포인터를 사용함으로써 데이터를 효율적/편하게 관리 가능. 특히 ARRAY
//  2. 변수를 그 자체로 여기저기 사용할 경우, 매번 변수를 보낼순 없고 복사 하기도 버거우니
//		주소를 그대로 보냄.

struct Something
{
	int a, b, c, d; // 4 * 4 = 8 bytes
};

int main(void)
{
	int x = 5; 
	double d = 1.0;

	typedef int* pint; // 이렇게 데이터 타입인 것 처럼 해도 됨. (나중에 복잡해지면)

	int *ptr_x = &x; 
	// 뒤에 바로 ptr_y = &y 하면 ptr_y는 포인터 X
	// pint ptr_x = &x, ptr_y = &y -> 이건 둘다 포인터가 됨 
	// (typedef 로 int* 를 pint 로 정의) 

	double *ptr_d = &d;


	cout << ptr_x << endl;		// 주소가 나옴
	cout << *ptr_x << endl;		// 메모리 주소에 담겨있는 값 = 5 (int 타입) (de-referincing *)
	cout << typeid(ptr_x).name() << endl;



	cout << ptr_d << endl;
	cout << *ptr_d << endl;

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << "  " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << "  " << sizeof(ptr_d) << endl;



	Something ss;
	Something *ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl;


	return 0; 
}