/*пишка по лейбницу*/
#include <iostream>
#include <cmath>
int main() {
    double y=0;
    int i = 0;
    do
    {
       double drob = 1.0 / (1 + 2 * i);  /*важно указать что единичка вещественная, иначе вычисления и дале будут целыми и получим грубо округлённый результат в 4*/
       if (i % 2 == 0) {  /*чередуем четные и нечетные члены*/
                   y += drob;
               } else {
                   y -= drob;
               }
        i++;
    }
    while (i < 1000);
    double pi = 4*y;
    std::cout<< pi<<std::endl;
    return 0;
}
