#include <iostream>
#include <vector>
#include <cstdint>

// Type Aliases 
// �ڷ������� ����(����) ���̱� 
// ///////////////////////////////////
// �ڵ� ���� ������ ���� 
// ����� ª�� ���϶� ����
// ���� ���� �󿡼� �б� ���� 
// �����ʺ� �������� �÷����� �������� �ڵ��� �Ҷ� ���������� ��� 

using namespace std;

int main(void)
{

	typedef double distance_t;
	using pairlist_t = vector<pair<string, int>>; 
	//typedef vector<pair<string, int>> pairlist_t; 
	
	std::int8_t i(97); 
	// ���ο� �ڷ��� ���ǰ� �ƴ϶� �ִ°͵� �߿� ��Ȳ�� ������ ���� typedef�� ���� �����
	// 
	// 
	// 
	// distance_t = double 
	// _t �� �Ϲ��� �� 

	double		my_distance;
	distance_t  home2work; 
	distance_t	home2school;

	/////////////////////

	//std::vector<std::pair<std::string, int> > pairlist;
	
	vector < pair < string, int> > pairlist; // �̷� �������� ���� 

	return 0; 
}