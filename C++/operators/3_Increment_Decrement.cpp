#include <iostream>

using namespace std; 

int main()
{
    int x(6), y(6);

    cout << x << " " << y << endl;

    cout << x++ << " " << y-- << endl;

    cout << x << " " << y << endl;

    ///////////////////////////////////////////////////////////
    //   ++x -> x�� ���� 1 ���ϰ� ���
    //   x++ -> cout(or �����ϴ� stream) �� x�� ���� ������ x+1

    // int v = func_add( x , x++) *����arguement �ڵ� NO -�����Ϸ����� �޶��� 

    // x = x++ �� NO. 
    return 0;
}
