#include <iostream>
#include "9_My_Constant.h"


using namespace std;

void printNumber(const int my_num) // �Ķ���Ϳ� const�� �����ϴ� ��� ����
{
	// �Ķ���� ���� ���� �ϰ������ 
	int n = my_num; // �̷������� �Űܼ� �ϴ°� ���� 
	

	cout << n << endl; 
}


int main(void)
{
	////////////////////////////////////////////////////////////
	////////////////  ** Const Variable **  ////////////////////

	const double gravity{ 9.8 }; 
	// const �� �׻� �տ�/ �ؿ��� ���� �� ���� �Ұ� 
	// Always need to do initialisation 

	printNumber(123);
	


	// ****   CompileTime vs Runtime constants ?? ****

	const int my_const(123); 
	// ������ �Ҷ� �̹� my_const�� �� ���� 
	//������ �Ҷ� �����Ǵ°� '������ Ÿ�� ���'

	int number;
	cin >> number;

	const int special_number(number); 
	//special_number�� � ���� ������ ���� �������� ��  
	//��Ÿ�� 

	
	
	// �� ���� ���̸� ��Ȯ�ϰ� �����ٶ� --> c++11   constexpr
	constexpr int my_const1(333); 
	//������ Ÿ�ӿ� ���� ������ �����Ǵ� ������ ���� 
	//- ������ �ϸ鼭 üũ�ϰڴٴ� �ǹ� 
	// constexpr int special_number(number) ó�� ��Ÿ�ӿ��� ��� �Ұ� 
	



	////////////////////////////////////////////////////////////
	///////////////////  ** SYMBOLIC **  ///////////////////////

	int num_item = 123;
	const int price_per_item = 30; 
	// int price = num_item * 30;
	// *30 �̷������� magic number �� �ִ°� ������. �Ʒ�ó�� �ϱ� (Symbolic) 
	
	int price = num_item * price_per_item; 
	
	
	
	// �ʿ��� const ������� �Ѱ��� ���Ƴ��°� ����. - 9_My_Constant.h
	// ���Ƴ��� �Ѵ��� ���� ���� ���� + ���� ���� 

	double radius; 
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi; 




	return 0; 
}