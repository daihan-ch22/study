#include <iostream>
#include <limits>
bool isEqual(int a, int b);

int main(void)
{
	using namespace std;

	bool b1 = true; // copy initialization
	bool b2(false); // direct initialisation
	bool b3{ true }; // uniform initialization
	b3 = false;


	cout << std::boolalpha;
	// showing result in English (True / False)
	// noboolalpha -> showing in digit (1 / 0)

	cout << b3 << endl; // 0 -> false
	cout << b1 << endl; // 1 -> true 

	cout << "!true -> " << !true << endl; // ! -> NOT operator (!true = false)
	cout << "!false -> " << !false << endl; // !false = true 
	cout << !b1 << endl;


	///////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////
	cout << "***********************************************\n";

	cout << "And Operator (logic) &&\n";
	//cout << std::boolalpha;
	cout << (true && true) << endl; // only when both sides are true -> true 
	cout << (true && false) << endl;	//false
	cout << (false && true) << endl;	//false
	cout << (false && false) << "\n\n"; //false


	cout << "Or Operator (logic) ||\n";
	cout << (true || true) << endl; // if one of them is true -> true
	cout << (true || false) << endl;	//true
	cout << (false || true) << endl;	//true
	cout << (false || false) << endl;	//false

	///////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////
	cout << "***********************************************\n";

	cout << "If Condition\n";
	if (5) // if(4) -> true. 0 = false, else = true (even -digit)
	{
		cout << "This is true \n";
	}
	else
	{
		cout << "This is false \n";
	}

	///////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////
	cout << "***********************************************\n";
	cout << "Boolean Return\n";

	cout << isEqual(1, 1) << "\n" << isEqual(0, 3) << endl;


	cout << "***********************************************\n";
	cout << "Boolean Input\n";

	bool binput; 
	cout << "Press bool (0 - 1)\n";
	cin >> binput; // 0 or 1을 입력해야 정확함 
	cout << "Your Input: " << binput << endl;


	///////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////
	cout << "***********************************************\n";
	cout << "PRACTICE\n\n";

	int input_num; 
	
	cout << "Input any Integers (-2147483648 ~ 2147483647)";
	cin >> input_num;
	if (input_num % 2 == 0)
		cout << "(짝수)Input number is: " << input_num << endl;

	else
		cout << "홀수\n";




	return 0;
}





bool isEqual(int a, int b)
{
	bool result = (a == b); // if a ==b : true(1) // or false(0)

	return result;
}