#include <iostream>

// Using문 과 모호성(ambiguous)

// 헤더에서 using namespace 사용할땐 매우 주의할것.
// 가능하면 지양할것 

namespace a
{
	int my_var(10);
	int my_a(123);
	int count(134141);
}

namespace b
{
	int my_var(20);
	int my_b(3450);
}
int main()
{
 
	using namespace std;

	
	//cout << my_var << endl; // (ERROR) my_var is ambiguous 
	
	//using namespace a; 
	//using namespace b;
	//cout << my_a << endl;
	//cout << my_b << endl;

	{
		using namespace a;
		cout << my_var << endl;
		cout << count << endl;  
		// 그냥 쓰면 error. std 안에 count 가 포함되있음
		// 그래서 쪼개서 쓰던지 해야함 a::count 처럼 
	}

	{
		using namespace b;
		cout << my_var << endl;
	}


	return 0;
}

