/*Пи по Виете*/
#include <iostream>
#include <cmath>

int main() {
    double inf=1;
    double pres=0;
    int i = 0;
    do
    {
       pres=sqrt(2+pres);  /*каждую итерацию загоняет под корень ещё один корень и отделяет прошлую на деление на двойку*/
       inf *=pres/2;
        i++;
    }
    while (i < 1000);
    double pi = 2 / inf;
    std::cout<< pi<<std::endl;
    return 0;
}

