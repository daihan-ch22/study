#include <iostream>
#include <limits>

//   Sizeof       쉼표comma     조건부conditional      연산자 


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
	int z = (++x, ++y);  // 앞에꺼 계산 한번 하고 뒤에꺼 계산하고 뒤에꺼를 z 에 넣음
	//    ++x;     
	//    ++y;     
	//    int z = y;

	cout << x << " " << y << " " << z << endl;


	//////////** conditional operator ( arithmetric if ) 

	bool onSale = true;

	//const int price = (onSale == true) ? 10 : 100;  // 3항연산자는 너무 길어질시 비추 

	/* if (onSale) // price 값을 const 로 쓰러면 위처럼. 
		price = 10;
	else
	price = 100;

	*/


	const int price = getPrice(onSale); 
	// 굳이 const 와 if를 쓰고싶다면 함수를 새로 만들어서 하면 된다 근데 번거롭다. 

	cout << price << endl; 




	return 0;
}