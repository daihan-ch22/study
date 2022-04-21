#include <iostream>

using namespace std; 

int main()
{
    int x(6), y(6);

    cout << x << " " << y << endl;

    cout << x++ << " " << y-- << endl;

    cout << x << " " << y << endl;

    ///////////////////////////////////////////////////////////
    //   ++x -> x에 먼저 1 더하고 출력
    //   x++ -> cout(or 현재하는 stream) 에 x를 먼저 보내고 x+1

    // int v = func_add( x , x++) *같은arguement 코딩 NO -컴파일러마다 달라짐 

    // x = x++ 도 NO. 
    return 0;
}
