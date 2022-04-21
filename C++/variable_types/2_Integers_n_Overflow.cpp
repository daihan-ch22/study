#include <iostream>
#include <cmath> //library for pow
#include <limits>

// *******POINT == ����Ÿ�Ը��� �����ִ� �ִ� �ּҰ��� ���� ====
// ******* ����� overflow 

int main(void)
{
	using namespace std;

	short	s = 1; // 2 bytes = 2 * 8 bits = **16bits** 2^16
	int		i = 1;
	long	l = 1;
	long long	ll = 1;

	cout << sizeof(short) << " bytes" << endl;
	cout << sizeof(int) << " bytes" << endl;
	cout << sizeof(long) << " bytes" << endl;
	cout << sizeof(long long) << " bytes" << endl;
	cout << "*******************************\n\n";

	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl; // MAX number of short == 2^16
	// ��ȣ �� -1 ## signed ������ ��� �޸� �� ���ڸ����� ��ȣ ǥ���ϴµ� ����. �׷��� ��ȣ�� ����ϴ� 1��Ʈ�� ���� 
	// ��ȣ �� -1 ## 0�� ǥ���Ѱ� ���� ## c ����������ó�� ���ڴ� 0 ���� �����ϹǷ�... i[3] = {0, 1, 2}

	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;
	cout << "*******************************\n"
		<< "short - OVERFLOW\n\n";

	s = 32767;
	s = s + 1; // s +=1; // 32768

	short k = std::numeric_limits<short>::min();
	k -= 1;

	cout << "32768?   " << s << endl; // overflow 
	cout << "-32768?   " << k << endl;

	// 2 ������ ǥ���س����鼭 1 ���ϸ� �ڷ� ���ư����� (���� ���� ���� �ǹ���) 
	// ���������� �ּҰ����� 1�� ���� �� ���ư� 
	// ���� ������ �����ִٰ� ����ϸ� ���� 

	cout << "*******************************\n"
		<< "OVERFLOW Practice\n\n";

	cout << std::numeric_limits<int>::max() << endl;
	cout << std::numeric_limits<int>::min() << endl;
	cout << std::numeric_limits<int>::lowest() << endl;

	cout << "*******************************\n"
		<< "OVERFLOW Practice2 unsigned\n\n"; 

	cout << "unsigned int MAX =  "<< std::numeric_limits<unsigned int>::max() << "\n\n";
	
	unsigned int j = -1;
	cout << "unsigned int = -1??   " << j << endl;;
	// unsigned int �� 0 �̻��� ���� -> -1 �� ���� overflow �� ������
	// unsigned int -1�� signed int�� �����Ϸ��� �ٲ����.  �������� 

	

	return 0; 
}