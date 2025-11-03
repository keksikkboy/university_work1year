#include <iostream>
#include <cmath>

int main() {
    double x=1;
    int i = 1;
    do
    {
       double vverx= (2*i)*(2*i);
       double vnis= (2*i+1)*(2*i-1); /*в интернете нашёл иной вид ф-лы валлиса :D */
       x*= vverx/vnis;
        i++;
    }
    while (i < 1000);
    double pi = 2*x;
    std::cout<< pi<<std::endl;
    return 0;
}
