//перевод форматов времени в секунды путём простого умножения чисел в функции
#include <iostream>
using namespace std;
float sectransfer(float hours,float minute, float second) {
    hours = hours*3600;
    minute = minute*60;
    float all= hours+minute+second;
    return all;

}
int main() {
    int a,b,c;
 cout <<"enter hours"<<endl;
 cin>> a;
 cout<<"enter minute"<<endl;
 cin>> b;
 cout<<"enter second"<<endl;
 cin>> c;
 cout<< sectransfer(a,b,c)<<endl;

    return 0;
}
