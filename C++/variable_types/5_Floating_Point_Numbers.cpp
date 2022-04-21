//�ε��Ҽ��� �� 
// float - 4bytes minimum
// double - 8bytes minumum
// long double - 8bytes / 8,12,16 bytes in general 

//****POINT***
//�츮�� �����ϴ� �Ŷ� ���ο��� ó���ϴ°Ŷ� ������ �ִ� 


#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>


using namespace std;


int main()
{

	float f;
	double d;
	long double ld;


	cout << "Size of Floating\n";
	cout << sizeof(f) << "   MAX:  "
		<< numeric_limits<float>::max() << "   MIN:  "
		<< numeric_limits<float>::min() << "   LOWEST:  "
		<< numeric_limits<float>::lowest() << endl;

	cout << sizeof(d) << "   MAX:  "
		<< numeric_limits<double>::max() << "   MIN:  "
		<< numeric_limits<double>::min() << "   LOWEST:  "
		<< numeric_limits<double>::lowest() << endl;

	cout << sizeof(ld) << "   MAX:  "
		<< numeric_limits<long double>::max() << "   MIN:  "
		<< numeric_limits<long double>::min() << "   LOWEST:  "
		<< numeric_limits<long double>::lowest() << endl;

	//*********************************************************
	cout << "*************************************************\n";
	cout << "Resetting Float\n";

	float k(3.14); // 3.14 = 31.4 * 0.1 // 3.14 * 100 = 3.14e2
	cout << 3.14 << "\n";		// 3.14
	cout << 31.4e-1 << "\n";	// 3.14
	cout << 31.4e-2 << "\n";	// 0.314
	cout << 31.4e1 << "\n";		// 314
	cout << 31.4e2 << endl;		// 3140


	cout << "**************************************************\n";

	float p(123456789.0f); // 10 significant digits
	
	cout << std::setprecision(9); // �� �ڸ� �� ���� ��Ÿ���� <iomanip>
	cout << 1.0 / 3.0 << endl;
	cout << p << endl; // -> 123456792 
	// ���������� �������� ó�� �Ǳ� ������ �����ϴ°Ͱ� �ٸ��� ����
	// ���е��� �������� ���� �� ���� 

	double q(0.1);
	cout << std::setprecision(17);
	cout << q << endl; // 0.1000000000000001 
	//-> 0.1 �� �ε� �Ҽ��� ���� ǥ���� �� �ִ� ���� ����� �� 

	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	cout << setprecision(17);
	cout << d1 << "\n" << d2 << endl; 
	//d1 = 1.0
	//d2 = 0.9999999999989 ������ ��
	
	cout << "**************************************************\n";
	cout << " 0 / 0 ? \n";
	// ���� ������ ���� �ִ� ���� infinite ���� �ƴ��� Ȯ���ϴ°� �߿�.
	// Ȯ���Ҷ��� std::isnan(������) //// (bool variable) <cmath> 
	// true & false (1,0) ���� �˷���  true -> ���ڰ� �ƴϴ� 

	// std::isinf(������) - infinite ���� �ƴ��� true -> infinite 

	double zero = 0.0;
	double posinf = 5.0 / zero; 
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << "   " << std::isnan(posinf) << endl;  // inf -> infinite 
	cout << posinf << "   " << std::isinf(posinf) << endl;
	cout << neginf << "   " << std::isnan(neginf) << endl;  // -inf -> -infinite 
	cout << nan << "   " << std::isnan(nan) << endl;	 // -nan(ind) -> indeterminate
	cout << 1.0 << "   " << std::isnan(1.0) << endl;
	


	return 0;
}
