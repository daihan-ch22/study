#include <iostream>

// ��� ������
// ���� ������ �� �Ǽ� ������� ����� �ٸ�! 


 
int main(void)
{

	using namespace std;


	int x = 7, y = 4;
	cout << x / y << endl;

	// ���� �ϳ��� �Ǽ��� �Ǽ������� ��� 
	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl; 

	///////////////////////////////////////////////////
	// �ſ� ���־���! 
	
	int z = x; // x���� z �� ����Ű�� �ִ� �޸𸮿� �־�� 

	z += y; // z = z + y
	//    -=   *=   /=    %=



	return 0;
}

