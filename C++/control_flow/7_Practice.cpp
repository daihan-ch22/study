#include <iostream>	

using namespace std;

void gugudan(void);
void diamondstar(void);

int main(void)
{

	//GUGU
	gugudan();
	

	//stars (Diamond)
	diamondstar();



	return 0;
}





void gugudan(void)
{

	cout << "GUGU DAN ---- input your number..\n";
	int input_num;
	cin >> input_num;


	for (int i = 0; i <= 9; ++i)
	{
		int multiply{ input_num * i };

		cout << input_num << " * " << i << " = "
			<< multiply << endl;
	}

}


void diamondstar(void)
{
	cout << "Stars.. your number?\n";
	int starnum;
	cin >> starnum;

	//»ó´Ü 
	for (int i = 0; i < starnum; i++) //starnum ¸¸Å­ ¹Ýº¹ 
	{
		for (int j = i; j < starnum - 1; j++) // ºóÄ­ 
		{

			cout << "@";
		}

		for (int k = 0; k <= i * 2; k++) // *
		{
			cout << "*";
		}


		cout << endl;
	}

	//ÇÏ´Ü
	for (int i = starnum - 1; i >= 0; i--)
	{
		for (int j = i; j < starnum; j++)
		{
			cout << "@";
		}
		for (int k = (i * 2) - 1; k > 0; k--)
		{
			cout << "*";
		}
		cout << endl;
	}
}