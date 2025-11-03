/*алгоритм на проверку ложного и истинного значение, какой вариант брал не помню*/
#include <iostream>
using namespace std;
int main()
{
    bool a, b, c, u, q; /*тип данных бул для приёма ложного/истинного значения */
    int x, y, z;
    cout<<"Enter x:"<<endl; /*ввод юзером значений*/
    cin>>x;
    cout<<"Enter y:"<<endl;
    cin>>y;
    cout<<"Enter z:"<<endl;
    cin>>z;
    a = (x > 0);
    b = (y >= 0);
    c = (z == 0);
    q = (b || c); /*операнд или, хотя б один истина*/
    u = a && (q); /*операнд И, истина, если оба аргумента истина*/
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"result U : "<<u<<endl;
    return 0;
}
