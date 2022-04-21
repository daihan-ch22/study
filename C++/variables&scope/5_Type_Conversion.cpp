#include <iostream>
#include <typeinfo> // typeid(arg).name() 
#include <iomanip>

using namespace std;




int main()
{
    // numeric promotion (작은메모리 -> 큰 메모리)
    // 큰 문제 x (int -> long int / double -> long double...)
    float i = 1.0f;
    double j = i; 

    
    
    //numeric conversion

    double d = 3; // integer 3 (작음) -> double (큼) 
    short s = 2;
    // 큰 메모리 -> 작은 메모리 or 타입의 변환 
    int q = 30000;
    char c = q; 
    // 48 --- 큰 문제 발생 
    //(메모리 범주에 따라 괜찮을 때도 있음) q =2 
    cout << static_cast<int>(c) << endl; 

    double dd = 0.123456789;
    float ff = dd; 
    cout << std::setprecision(12) << ff << endl;
    // double -> float : possible loss of data 

    cout << 5u - 10u << endl; // u -> unsigned 
    //      (우선도) int < unsigned int < long < unsigned long 
    //      < long long < unsigned long long < float 
    //      < double < long double
    // 
    // 
    // 따라서 내부적으로 int로 바꾸질 않음. 그래서 이상한 값 나옴 



    int a(123);
    cout << typeid(a).name() << endl;  // 변수 타입 이름 출력 





    return 0;
}

