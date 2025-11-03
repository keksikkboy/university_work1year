/*Вторая реализация Фиббоначи, если вспомнить олимпиадные математические приколы, вывод с помощью формулы Бене и значения ф-лы золотого значения*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double bene = (1 + std::sqrt(5)) / 2;  /*примерное значение золотое сечения*/
    double x = 2;
    double rounded = std::round(x);  /*ф-ция округления до ближ. значения*/
    cout<<"0"<<endl; cout<<"1"<<endl; cout<<"1"<<endl;
    int i = 0;
    do
    {
        cout << rounded << endl;
        x *= bene;
        rounded = round(x);
        i++;
    }
    while (i < 4);
    return 0;
}
