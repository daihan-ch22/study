#include <iostream>
#include <bitset>

namespace MYNOTE
{
	//FLAG |=	  MASK			FLAG의 특정 비트(MASK)를 킨다
	//
	//
	//FLAG &=	  MASK			특정 비트(MASK)가 켜져있는지 검사 & 같은 비트일 경우에만 킨다. 
	//
	//
	//FLAG &=  ~MASK			FLAG의 특정 비트(MASK)를 끈다 
	//
	//
	//FLAG ^=   MASK			특정비트(MASK) 가 꺼져있으면 켜고, 켜져있으면 끈다 

}

using namespace std;
int main1(void)
{
	/*bool item1_flags = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;
	....*/ //아이템 개수만큼 flag를 만들면 너무 복잡
	// 변수하나로 아이탬 개수의 true false를 구별 할수 있을까?

	

	//전제조건 - array처럼 비트단위에 0 1 을 기록해서 아이템 존재 유무 판별
	const unsigned char opt0 = 1 << 0; //00000001 = integer 1 
	const unsigned char opt1 = 1 << 1; //00000010
	const unsigned char opt2 = 1 << 2; //00000100 
	const unsigned char opt3 = 1 << 3; //00001000 


	// 00000000 
	// item 1을 가졌을때 00000001, 2를 가졌을때 00000010
	// 아이템 8개를 가지고있는지 아닌지 bool tyoe 8개를 쓰는게 아니고 
	// char type 1개로 확인 가능 
	unsigned char items_flag = 0; // 00000000
	cout << "No Items " << bitset<8>(items_flag) << "\n\n";


	//item 획득 event - item0번을 갖게된다 
	// items_flag에서 가장 오른쪽 번째를 1로 변경 00000001 
	items_flag |= opt0;
	cout << "Item0 Obtained " << bitset<8>(items_flag) << endl;

	//item3 획득 (item0 보유)
	items_flag |= opt3; //bitwise | (or)
	cout << "Item3 Obtained " << bitset<8>(items_flag) << endl;

	//item3 lost
	items_flag &= ~opt3;  // bitwise &(and) +  ~(not) 
	cout << "Item3 Lost " << bitset<8>(items_flag) << endl << endl;


	
	//check do we have item1? 
	cout << "****  CHECK - DO WE HAVE ITEM?  ****" << endl;
		if (items_flag & opt1) //opt1 의 2진수 자리에 해당하는 숫자가 1이면 true 
		cout << "Has Item 1 " << endl;
	else cout << "No Item 1" << endl;


	//check do we have item0? 
	if (items_flag & opt0) //opt1 의 2진수 자리에 해당하는 숫자가 1이면 true 
		cout << "Has Item 0 \n\n" << endl;
	else cout << "No Item 0\n\n" << endl;


	// obtain item 2 & 3
	// Binary opt2, opt3 합치고 items_flag에 또 합쳐서 반환 
	items_flag |= (opt2 | opt3); 
	cout << "opt2 \| opt3  -> " << bitset<8>(opt2 | opt3) << endl;
	cout << "Binary opt2, opt3 합치고 items_flag에 또 합쳐서 반환  " << endl;
	cout << "Item 2 & Item 3 obtained " << bitset<8>(items_flag) << endl << endl;

	 if ((items_flag & opt2) && !(items_flag & opt1)) 
	// item2 가 있고 item1 이 없으면 
	{
		// lost item 2 but obtained item1 00001011
		// XOR (^) -> 비트 비교시 하나만 1일때 1 반환, 두개다 1 이면 0 
		
		items_flag ^= opt2; // 1101    0100
		items_flag ^= opt1; // 1001    0010
							//  -->1011 
	
	 	// 한줄로 만들시 ->> items_flag ^= ((~opt2) ^ (~opt1));
		
	 }
	cout << bitset<8>(items_flag) << endl;

		return 0;
}