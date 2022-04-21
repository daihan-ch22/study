#include <iostream>	
#include <cstdlib> // std::radn(), std::srand()
#include <ctime> // std::time
#include <random> // c++ 11 
#include <time.h> // for practice timer

using namespace std;

// Computer does not have ability to make random number
// This is how it works. Looks like random number. 
unsigned int PRNG(void) //Pseudo Random Number Generator 
{
	static unsigned int seed = 5523;
	
	seed = 8253729 * seed + 2396403;

	return seed % 32768;
}


//특정 정수 사이에서만 난수 발생
// RAND_MAX - 난수중에서 가장 큰 숫자 (매크로로 이미 정의되있음)
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0); //이 코드를 밖으로 빼서 전역 상수로 하는것도 좋음
	
	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}


void practice(void);

int main(void)
{
	
	// set seed number 5523
	// 다만 이렇게 하면 계속 같은 수가 나와서 매번 seed를 다르게 해야함
	//		std::srand(5323); // set seed number 5523
	// 디버깅 할때는 꼭 seed를 고정해놓고 해야한다. 안그러면 매번 달라짐 
	

	//그래서 ctime 의 time을 이용 - cpu의 시간을 가져옴
	//	std::srand(static_cast<unsigned int>(std::time(0)));

	for (int count = 1; count <= 100; ++count)
	{
		//cout << PRNG() << "\t";
		
		//cout << std::rand() << "\t";
		
		//cout << getRandomNumber(5, 8) << "\t";
		
		//cout << rand() % 4 + 5 << "\t"; // 5~8 까지의 랜덤 / 이경우에 나누는 숫자가 클수록 한쪽에 몰리는 문제 발생 

		if (count % 5 == 0) cout << endl; 
	}

	
	{	// c++ random library (c++11)//
		

		std::random_device rd;

		//std::mt19937; // 32비트 난수 

		std::mt19937_64 mersenne(rd());// 64비트 난수 / create a mersenne twister

		std::uniform_int_distribution<> dice(1, 6); // 1 ~ 6 에서 하나가 선택 되는데 나올확률이 동일


		for (int count = 1; count <= 20; ++count)
		{
			cout << dice(mersenne) << endl;
		}

	}

	cout << "__________________________________\n";
	cout << "__________________________________\n";

	practice();

	return 0;
}



void practice(void) // 1~10000 난수 + 시간측정
{
	clock_t startTime = clock();

	random_device randn;
	mt19937_64 randnum(randn());
	uniform_int_distribution<> roll(1, 10000);

	static unsigned int counts{ 0 };

	while (1)
	{
		unsigned int check = roll(randnum);
		cout << roll(randnum) << "\t";
		


		if (check == 10000)
		{
			cout << "\ncurrent num:  " << check << endl;
			cout << "total counts: " << counts << endl;
			clock_t endTime = clock();
			clock_t timeElapsed = endTime - startTime;
			
			double timeInSec = (double)(timeElapsed / CLOCKS_PER_SEC);
			cout << "Time Elapsed: " << timeInSec << " sec" <<endl;
			cout << "Time Elpased: " << timeElapsed << " ms" << endl;
			break;
		}

		
		++counts;

		if (counts % 5 == 0) cout << endl;
	}
}