/*циклос с постусловием*/
#include <iostream>

int main() {
    double number = 279936;
    int stenen = 6;

    int i = 0;
    do
    {
        std::cout << number << std::endl;
        number /= stenen;
        i++;
    }
    while (i< 5) ;
    return 0;
}
