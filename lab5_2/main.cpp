//поиск макс значения в массиве
#include <iostream>

using namespace std;
int n = 10;
int search (int array [],int n); //объявление функции
int main() {
   int array[n];

        for(int i = 0; i < n; i++) {
                cout<<"enter "<<i + 1<<" number "<<endl;
                cin>>array[i];
            }
            cout<<"max score: "<<search(array,n) <<endl;
            return 0;
        }
int search (int array[],int n) {  //реализация ф-ции
    int z = array[0];

    for (int i = 1; i < n; i++) {   //цикл перебирает каждый элемент массива и сравнивает с максимальным, и он обновляется если таковой находится
        if (array[i] > z) {
            z = array[i];
        }
}
   return z;
}

