#include <iostream>
#include <typeinfo> // typeid(arg).name() 
#include <iomanip>

using namespace std;




int main()
{
    // numeric promotion (�����޸� -> ū �޸�)
    // ū ���� x (int -> long int / double -> long double...)
    float i = 1.0f;
    double j = i; 

    
    
    //numeric conversion

    double d = 3; // integer 3 (����) -> double (ŭ) 
    short s = 2;
    // ū �޸� -> ���� �޸� or Ÿ���� ��ȯ 
    int q = 30000;
    char c = q; 
    // 48 --- ū ���� �߻� 
    //(�޸� ���ֿ� ���� ������ ���� ����) q =2 
    cout << static_cast<int>(c) << endl; 

    double dd = 0.123456789;
    float ff = dd; 
    cout << std::setprecision(12) << ff << endl;
    // double -> float : possible loss of data 

    cout << 5u - 10u << endl; // u -> unsigned 
    //      (�켱��) int < unsigned int < long < unsigned long 
    //      < long long < unsigned long long < float 
    //      < double < long double
    // 
    // 
    // ���� ���������� int�� �ٲ��� ����. �׷��� �̻��� �� ���� 



    int a(123);
    cout << typeid(a).name() << endl;  // ���� Ÿ�� �̸� ��� 





    return 0;
}

