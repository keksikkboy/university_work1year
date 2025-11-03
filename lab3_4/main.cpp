/*Первая реализация послед Фибоначчи через цикл*/
#include <iostream>
using namespace std;
int main()
{
    int n1 = 0;
    int n2 = 1;
    int number_next = 1;
    int n;
    cout<<"enter need numbers"<<endl;
    cin >> n;
    if (n>=1)
        cout << 0 << " ";
    if (n>=2)
        cout << 1 << " "; /*использование условности, что последовательность математически начинается с 0 1 1*/
    for (int i = 0; i < n-2; i++){
        number_next = n1 + n2;
        cout << number_next << " ";
        n1 = n2;  /*обновлен1ие цикла, н1 принимает н2, а н2 значение выведенного числа*/
        n2 = number_next;
    }
    cout << endl;
    return 0;
}
   // 0 1 = 1 // 1 1  = 2 // 1 2 = 3 // 2 3 = 5 //
