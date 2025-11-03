/*калькулятор на обоих типах операторах ветвления*/
/*писал без пространства имён чтобы запомнить синтаксис и правила постановки*/
#include <iostream>
using namespace std;
int main() {
    char a ,b , c ,p;
    a = '+';
    b = '-';
    c = '/';
    p = '*';
    char znak;
    double x, y;

    std::cout << "enter operation (+,-,/, *)(1 2 3 4) " << std::endl;  /*введение юзером значений и знаков операций имеет проверку на корректность, калька с моего прошлого кода*/
    //if (!(std::cin >> znak)) {
    cin>>znak;
    //      std::cout << "it's text, -__-" << std::endl;
    //  return 1;
    //  }
    cout << "enter first number x" << endl;
    if (!(cin >> x )) {

        cout << "it's text, -__-" << endl;
        return 1;
    }
    cout << "enter two number y" << endl;
    if (!(cin >> y )) {

        cout << "it's text, -__-" << std::endl;
        return 1;
    }

    if (znak == a) {
        cout<<x+y<<endl;
    }

    if (znak == b) {
        cout<<x-y<<endl;
    }
    if (znak == c) {
        cout<<x/y<<endl;
    }
    if (znak == p) {
        cout<<x*y<<endl;
    }







    //    switch (znak) {
    //    case '+':
    //        std::cout << "x + y " << x + y << std::endl;   /*сама программа калькулятора через свитчи и выводом результата*/
    //        break;
    //    case '-':
    //        std::cout << "x - y " << x - y << std::endl;
    //        break;
    //    case '/':
    //        if (y != 0) {
    //            std::cout << "x / y " << x / y << std::endl;  /*через иф элс базовое правило что делить на ноль нельзя и вывод текста с ошибкой*/
    //        }
    //        else {
    //            std::cout << "lol, error" << std::endl;
    //        }
    //        break;
    //    case '*':
    //        std::cout << "x * y " << x * y << std::endl;
    //        break;
    //    default:
    //        std::cout<<"no"<<std::endl;
    //    }
    return 0;
}

