#include <iostream>
#include <vector>
#include <cstdint>

// Type Aliases 
// 자료형에게 가명(별명) 붙이기 
// ///////////////////////////////////
// 코드 유지 관리시 편함 
// 긴것을 짧게 줄일때 편함
// 같은 문맥 상에서 읽기 편함 
// 고정너비 정수에서 플랫폼에 독립적인 코딩을 할때 내부적으로 사용 

using namespace std;

int main(void)
{

	typedef double distance_t;
	using pairlist_t = vector<pair<string, int>>; 
	//typedef vector<pair<string, int>> pairlist_t; 
	
	std::int8_t i(97); 
	// 새로운 자료형 정의가 아니라 있는것들 중에 상황에 적합한 것을 typedef로 가명 만든것
	// 
	// 
	// 
	// distance_t = double 
	// _t 는 암묵적 룰 

	double		my_distance;
	distance_t  home2work; 
	distance_t	home2school;

	/////////////////////

	//std::vector<std::pair<std::string, int> > pairlist;
	
	vector < pair < string, int> > pairlist; // 이런 변수형도 있음 

	return 0; 
}