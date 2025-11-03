/*цикл с параметром 10 вариант*/
#include <iostream>

int main() {
    double number = 279936;
    int stenen = 6;

    for (int i = 0; i < 5; i++) {
        std::cout << number << std::endl;
        number /= stenen;
    }

    return 0;
}



