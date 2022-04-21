#include <iostream>
#include <limits>

//   Sizeof       ��ǥcomma     ���Ǻ�conditional      ������ 


int getPrice(bool onSale) // conditional part 
{
	if (onSale)
		return 10;
	else
		return 100; 
}


int main(void)
{
	using namespace std;


	//////////**  sizeof operator
	long double k;
	cout << sizeof(long double) << endl;
	cout << std::numeric_limits<long double>::max() << endl;






	//////////**  Comma Operator

	int x = 3;
	int y = 10;
	int z = (++x, ++y);  // �տ��� ��� �ѹ� �ϰ� �ڿ��� ����ϰ� �ڿ����� z �� ����
	//    ++x;     
	//    ++y;     
	//    int z = y;

	cout << x << " " << y << " " << z << endl;


	//////////** conditional operator ( arithmetric if ) 

	bool onSale = true;

	//const int price = (onSale == true) ? 10 : 100;  // 3�׿����ڴ� �ʹ� ������� ���� 

	/* if (onSale) // price ���� const �� ������ ��ó��. 
		price = 10;
	else
	price = 100;

	*/


	const int price = getPrice(onSale); 
	// ���� const �� if�� ����ʹٸ� �Լ��� ���� ���� �ϸ� �ȴ� �ٵ� ���ŷӴ�. 

	cout << price << endl; 




	return 0;
}