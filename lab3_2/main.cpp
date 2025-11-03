/*цикл с предусловием*/
#include <iostream>

int main() {
    double number = 279936;
    int stenen = 6;
    int i = 0;

    while ( i < 5 ) {
        std::cout << number << std::endl;
        number /= stenen;
        i++;
    }

    return 0;
}
