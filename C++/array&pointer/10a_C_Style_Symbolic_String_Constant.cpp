#include <iostream>

using namespace std;

// 문자열 = 문자의 배열 = 포인터와 호환

// C 스타일의 문자열 기호적 상수


const char *getName() // return 타입으로 넣을 수 도 있다. 
{
	return "jack Jack";
}

int main(void)
{
	{
		// char name[] "jack jack";

		// char name = "jack jack"; - 이건 안됨. 

		// const 가 있어야 기호적 상수를 쓸 수 있다. 

		const char *name = "jack jack";
		const char *name2 = "jack jack";


		cout << name << endl;
		cout << name2 << endl;
		cout << (uintptr_t)name << endl; //name 과 name2 주소가 같음.
		cout << (uintptr_t)name << endl;
		// 컴파일러가 두개가 같으니까 같은 주소로 써라 라고 한것
		// 내용이 다르면 주소도 달라짐. 
	}

	{
		////////////////////////////////////////
		// 문자 포인터의 특성

		int int_arr[5] = { 1,2,3,4,5 };
		char char_arr[] = "Hello World!";
		const char *name = "Jack Jack";

		cout << int_arr << endl; //주소가 나옴
		
		cout << char_arr << endl; // 문자열로 나옴
		cout << name << endl; // 문자열로 나옴 
		// cout 에서 문자열은 특별히 처리한다
		// cout 에서 문자의 포인터가 들어오면 문자열이 아닐까? 라고 가정하는것 



	}

	{

		char c = 'Q';

		cout << &c << endl; // cout에 주소값이 들어가니 문자열이 아닐까 하고 
		//컴파일러가 생각함. null 문자가 나올떄 까지 출력하므로 이상하게 나옴. 


		int s = 4;
		cout << &s << endl;

		int result{ 100 };
		
		for (int i = 2; i < 10; i += 1)
		{
			result -= i; 
		}
		cout << result << endl;

	}
	
	return 0;
}