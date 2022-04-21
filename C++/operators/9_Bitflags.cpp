#include <iostream>
#include <bitset>

namespace MYNOTE
{
	//FLAG |=	  MASK			FLAG�� Ư�� ��Ʈ(MASK)�� Ų��
	//
	//
	//FLAG &=	  MASK			Ư�� ��Ʈ(MASK)�� �����ִ��� �˻� & ���� ��Ʈ�� ��쿡�� Ų��. 
	//
	//
	//FLAG &=  ~MASK			FLAG�� Ư�� ��Ʈ(MASK)�� ���� 
	//
	//
	//FLAG ^=   MASK			Ư����Ʈ(MASK) �� ���������� �Ѱ�, ���������� ���� 

}

using namespace std;
int main1(void)
{
	/*bool item1_flags = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;
	....*/ //������ ������ŭ flag�� ����� �ʹ� ����
	// �����ϳ��� ������ ������ true false�� ���� �Ҽ� ������?

	

	//�������� - arrayó�� ��Ʈ������ 0 1 �� ����ؼ� ������ ���� ���� �Ǻ�
	const unsigned char opt0 = 1 << 0; //00000001 = integer 1 
	const unsigned char opt1 = 1 << 1; //00000010
	const unsigned char opt2 = 1 << 2; //00000100 
	const unsigned char opt3 = 1 << 3; //00001000 


	// 00000000 
	// item 1�� �������� 00000001, 2�� �������� 00000010
	// ������ 8���� �������ִ��� �ƴ��� bool tyoe 8���� ���°� �ƴϰ� 
	// char type 1���� Ȯ�� ���� 
	unsigned char items_flag = 0; // 00000000
	cout << "No Items " << bitset<8>(items_flag) << "\n\n";


	//item ȹ�� event - item0���� ���Եȴ� 
	// items_flag���� ���� ������ ��°�� 1�� ���� 00000001 
	items_flag |= opt0;
	cout << "Item0 Obtained " << bitset<8>(items_flag) << endl;

	//item3 ȹ�� (item0 ����)
	items_flag |= opt3; //bitwise | (or)
	cout << "Item3 Obtained " << bitset<8>(items_flag) << endl;

	//item3 lost
	items_flag &= ~opt3;  // bitwise &(and) +  ~(not) 
	cout << "Item3 Lost " << bitset<8>(items_flag) << endl << endl;


	
	//check do we have item1? 
	cout << "****  CHECK - DO WE HAVE ITEM?  ****" << endl;
		if (items_flag & opt1) //opt1 �� 2���� �ڸ��� �ش��ϴ� ���ڰ� 1�̸� true 
		cout << "Has Item 1 " << endl;
	else cout << "No Item 1" << endl;


	//check do we have item0? 
	if (items_flag & opt0) //opt1 �� 2���� �ڸ��� �ش��ϴ� ���ڰ� 1�̸� true 
		cout << "Has Item 0 \n\n" << endl;
	else cout << "No Item 0\n\n" << endl;


	// obtain item 2 & 3
	// Binary opt2, opt3 ��ġ�� items_flag�� �� ���ļ� ��ȯ 
	items_flag |= (opt2 | opt3); 
	cout << "opt2 \| opt3  -> " << bitset<8>(opt2 | opt3) << endl;
	cout << "Binary opt2, opt3 ��ġ�� items_flag�� �� ���ļ� ��ȯ  " << endl;
	cout << "Item 2 & Item 3 obtained " << bitset<8>(items_flag) << endl << endl;

	 if ((items_flag & opt2) && !(items_flag & opt1)) 
	// item2 �� �ְ� item1 �� ������ 
	{
		// lost item 2 but obtained item1 00001011
		// XOR (^) -> ��Ʈ �񱳽� �ϳ��� 1�϶� 1 ��ȯ, �ΰ��� 1 �̸� 0 
		
		items_flag ^= opt2; // 1101    0100
		items_flag ^= opt1; // 1001    0010
							//  -->1011 
	
	 	// ���ٷ� ����� ->> items_flag ^= ((~opt2) ^ (~opt1));
		
	 }
	cout << bitset<8>(items_flag) << endl;

		return 0;
}