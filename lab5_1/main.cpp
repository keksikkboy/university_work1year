//расчёт среднего значения массива
#include <iostream>
using namespace std;
int main()
{
    int n=10;   //юзер сам задаёт 10 элементов массива
   int s = 0;
   int array[10];
        for(int i = 0; i < n; i++) {
                cout<<"enter "<<i + 1<<" number "<<endl;
                cin>>array[i];
            }
            for(int i = 0; i < n; i++) {
              s += array[i];      //каждую итерацию переменная принимает след элемент массив

            }
            cout<<"mid value"<<s/n<<endl; //просто делим собранные значения на кол-во заданных значений
            return 0;
        }

