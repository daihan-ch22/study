#include <iostream>

// Using�� �� ��ȣ��(ambiguous)

// ������� using namespace ����Ҷ� �ſ� �����Ұ�.
// �����ϸ� �����Ұ� 

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
		// �׳� ���� error. std �ȿ� count �� ���Ե�����
		// �׷��� �ɰ��� ������ �ؾ��� a::count ó�� 
	}

	{
		using namespace b;
		cout << my_var << endl;
	}


	return 0;
}

