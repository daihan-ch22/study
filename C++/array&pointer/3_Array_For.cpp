#include <iostream>	
#include <limits>
using namespace std;


int main(void)

{
	//const int num_students = 5;
	int scores[] = { 84, 92, 76, 81, 56};
	cout << sizeof(scores) << "\t" << sizeof(int) << endl;

	const int num_students = sizeof(scores) / sizeof(int); // 20bytes / 4bytes = 5 bytes 
	//score[5]로 해도 되지만 이렇게 구해도 됨. 
	// (주의) 파라미터로 넘어간 array는 포인터 주소라 다른 결과 나올수 있음

	int total_score = 0;
	for (int i = 0; i < num_students; ++i)
	{
		total_score += scores[i];
	}

	double avg_score = static_cast<double>(total_score) / num_students;
	//note
	// double(total_score) / num_students != double(total_score / num_students);
	
	
	
	
	
	cout << "MAX & MIN in ARRAY\n";
	cout << "_______________________________________\n\n";
	
	int max_score = 0;
	int min_score = INT_MAX;
	for (int i=0; i < num_students; i++)
	{
		
		//max_score = (max_score < scores[i]) ? scores[i] : max_score
		if (max_score < scores[i])
		{
			max_score = scores[i];
		}
		
		min_score = (min_score > scores[i]) ? scores[i] : min_score;

	}
	cout << "Max score: " << max_score << "\n" 
		<< "Min score: " << min_score << endl;
	
	
	
	
	
	return 0;
}