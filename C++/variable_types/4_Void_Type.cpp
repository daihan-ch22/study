#include <iostream>


//**POINT
//데이터 타입이 다르고 사이즈가 다르더라도
//그 데이터의 주소를 표현하는 데이터 양은 동일하다. 포인터 개념


void my_function(void)
{

}

int main()
{
   // void my_void; // void는 변수선언 안됨. 메모리 차지x 
    int i = 123;
    float f = 123.456f;

    void *my_void;

    my_void = (void*)&i; //주소의 데이터 타입은 알고보면 동일하므로 (void*)로 캐스팅
    my_void = (void*)&f;
    
    // 어떤 데이터 타입은 메모리를 많이 차지함 301 302호 
    // 다른 타입은 401~408호까지 사용

    //각각의 데이터 타입의 첫 주소는 숫자 3개로 표현 301,302,401~
    //첫 규격은 똑같음 
    
    return 0;
}

