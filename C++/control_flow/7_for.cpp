#include <iostream>

using namespace std;
// iteration :: �ݺ�


int pow(int base, int exponent) //pow (�������ϱ�) �Լ� ���� �����
{
	int result{ 1 };

	for (int count = 0; count < exponent; ++count)
	{
		result *= base; 
	}
	return result;
}



int main(void)
{


	// for ���ο��� ������ ������ for ����� �����. 
	// ��� ��������� for �ۿ��� �����ϰ� for ù��° ���� ��ĭ ���α�
	int count{ 0 };
	for (; count < 10; ++count) 
	{
		cout << count << endl;
	}

	// for endless loop
	// -> for ( ; ; ++count) 

	cout << pow(2, 3) << endl;

	//for�� �ȿ��� ������ ������ ���� ����
	for (int i = 0, j = 0; (i+j)< 10; ++i, j += 2)
		cout << i << "  " << j << endl; 



	//while �� ���������� unsigned ���� ���� / ����ȭ�ÿ��� ����
	//�Ʒ� �ڵ�� ��������/ 0 ���Ϸ� �������⋚��
	//for (unsigned int i = 9; i >= 0; --i)
	//{
	//	cout << i << endl;
	//}


	return 0;
}