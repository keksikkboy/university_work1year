//определение минимума для двух чисел
#include <iostream>
using namespace std;
int min(int a, int b) {  //простенькая реализация через лог.операторы
    if (a < b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int x, y;
    cout << "enter first number "<<endl;
    cin >> x;
    cout << "enter second number "<<endl;
    cin >> y;

    int mini = min (x, y);
    cout << "min number " << mini << endl;

    return 0;
}
