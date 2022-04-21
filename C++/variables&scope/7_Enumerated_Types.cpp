#include <iostream>
#include <typeinfo>

// Enumerated Types - ������ 

//������(enum)�� ���� ������ ���𰡸� ������ ������ �ϰų� 
//���� �������� ���������� ���� �����ϰ�, ����� �� �ִ� ������ �ִ�.





/* ���ӿ��� �������� �޾����� - Į-1 ��ġ-2 / �ٵ� Į�� 0 ��ġ��1 �̷���
 ���� �ܿ�� ���� �� �ֱ� ������ ������ ��� 
int computeDamage(int weapon_id)
{
	if (weapon_id == 0) // sword
	{
		return 1;
	}
	if (weapon_id == 1) // hammer
	{
		return 2;
	}
}*/

// user-defined data types
// ��ȣ �������� ; 
// �� �����ϱ⶧���� ������
enum Colour 
{
	// �� �Ҵ� ����
	// -10, -9, -8.... �� �Ҵ� ���ϸ� 0���� ���� 0 1 2 3.. .
	COLOUR_BLACK = -10, 
	COLOUR_RED,	   
	COLOUR_BLUE,  
	COLOUR_GREEN,  
	COLOUR_SKYBLUE 
};


//enum Feeling //���빰�� ENUM���� �Ȱ�ġ�� 
//{
//	HAPPY,
//	JOY,
//	TIRED,
//	BLUE
//};

using namespace std;
int main()
{
	
	int color_id = COLOUR_BLUE;
	

	//������ ó�� �� ���� ����.
	//integer�� �ٷ� ������ ����
	// Casting �ؾ���
	// Colour my_color = 4; 
	Colour my_color = static_cast<Colour>(4);
	Colour house(COLOUR_BLUE);
	Colour apple{ COLOUR_RED };

	cout << house << apple;

	//cin ���� ������ ���� ��ȸ �ؼ� �޾ƾ���. 
	int in_num;
	cin >> in_num;

	if (in_num == static_cast<Colour>(4))
		my_color = static_cast<Colour>(4);

	cout << in_num;
	



	return 0;
}
