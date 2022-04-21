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


//Ư�� ���� ���̿����� ���� �߻�
// RAND_MAX - �����߿��� ���� ū ���� (��ũ�η� �̹� ���ǵ�����)
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0); //�� �ڵ带 ������ ���� ���� ����� �ϴ°͵� ����
	
	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}


void practice(void);

int main(void)
{
	
	// set seed number 5523
	// �ٸ� �̷��� �ϸ� ��� ���� ���� ���ͼ� �Ź� seed�� �ٸ��� �ؾ���
	//		std::srand(5323); // set seed number 5523
	// ����� �Ҷ��� �� seed�� �����س��� �ؾ��Ѵ�. �ȱ׷��� �Ź� �޶��� 
	

	//�׷��� ctime �� time�� �̿� - cpu�� �ð��� ������
	//	std::srand(static_cast<unsigned int>(std::time(0)));

	for (int count = 1; count <= 100; ++count)
	{
		//cout << PRNG() << "\t";
		
		//cout << std::rand() << "\t";
		
		//cout << getRandomNumber(5, 8) << "\t";
		
		//cout << rand() % 4 + 5 << "\t"; // 5~8 ������ ���� / �̰�쿡 ������ ���ڰ� Ŭ���� ���ʿ� ������ ���� �߻� 

		if (count % 5 == 0) cout << endl; 
	}

	
	{	// c++ random library (c++11)//
		

		std::random_device rd;

		//std::mt19937; // 32��Ʈ ���� 

		std::mt19937_64 mersenne(rd());// 64��Ʈ ���� / create a mersenne twister

		std::uniform_int_distribution<> dice(1, 6); // 1 ~ 6 ���� �ϳ��� ���� �Ǵµ� ����Ȯ���� ����


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



void practice(void) // 1~10000 ���� + �ð�����
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