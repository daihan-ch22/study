#include <iostream>
#include <cmath> //library for pow
#include <limits>

// *******POINT == 변수타입마다 쓸수있는 최대 최소값이 있음 ====
// ******* 벗어나면 overflow 

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
	// 괄호 안 -1 ## signed 변수의 경우 메모리 맨 앞자리수가 부호 표현하는데 쓰임. 그래서 부호를 담당하는 1비트를 빼줌 
	// 괄호 밖 -1 ## 0을 표현한걸 뺀것 ## c 공부했을때처럼 숫자는 0 부터 시작하므로... i[3] = {0, 1, 2}

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

	// 2 진수로 표현해놓으면서 1 더하면 뒤로 돌아가버림 (가장 작은 수가 되버림) 
	// 마찬가지로 최소값에서 1을 빼면 또 돌아감 
	// 서로 꼬리를 물고있다고 상상하면 편함 

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
	// unsigned int 는 0 이상의 정수 -> -1 이 들어가면 overflow 가 나버림
	// unsigned int -1을 signed int로 컴파일러가 바꿔버림.  꼬리물기 

	

	return 0; 
}