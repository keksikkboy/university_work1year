//калькулятор для мат. фигур и на вычисление факториала
#include <iostream>
#include <cmath>
using namespace std;
float pi = 3.14159;
float squareTriangle(float length, float high) {  //функция для треугольника
    float s = 0.5 * length * high;
    return s;
}
    float geron(float xa,float xb, float xc) {   //ф-ла Герона
      float  per= 0.5*(xa+xb+xc);
      float s = sqrt(per*(per-xa)*(per-xb)*(per-xc));
      return s;
}
   float squareRectagle(float length, float width){  //прямоугольник
   float s = length * width;
   return s;
   }
   float squareCircle(float rad) {  //кружок
       float s = pi*rad*rad;
       return s;
   }
   int factorial(int a) //это след. задание на факториал с рекурсией
   {
     if (a==0) return 1; // я  шоке как это работает
     else return a*factorial(a-1);
   }

int main() {
    int x, l, h, a,b,c,r;
    cout << "It's me! Supercalculator, choose what you need to calculate (number)" << endl;   //реализация выбора расчёта через свитчи и назначение значения переменной
    cout << "1. The S of the triangle (requires the length of the base and height)" << endl;
    cout << "2. The S of the triangle (requires 3 lengths)" << endl;
    cout << "3. The S of the rectangle (requires length and width)" << endl;
    cout << "4. The S of the circle (requires R)" << endl;
    cout << "5. factorial number" <<endl;
    cin >> x;

    switch(x) {
        case 1:
            cout << "Enter length of the base: ";
            cin >> l;
            cout << "Enter h: ";
            cin >> h;
            cout << "result is " << squareTriangle(l, h) << endl;
            break;
        case 2:
            cout << "enter first lengt " << endl;
            cin>>a;
            cout << "enter second lengt"<< endl;
            cin>>b;
            cout <<"enter third lengt"<< endl;
            cin>>c;
            cout <<"result is "<< geron(a,b,c)<< endl;
            break;
        case 3:
            cout << "enter is lenght" << endl;
            cin>>a;
            cout <<"enter is width"<< endl;
            cin>>b;
            cout<< " result is "<< squareRectagle(a,b)<<endl;
            break;
        case 4:
            cout<<"enter is radius"<< endl;
            cin>>r;
            cout<<"result is "<< squareCircle(r)<<endl;
            break;
        case 5:
           cout <<"enter is number"<<endl;
           cin>>b;
           cout <<"result is "<<factorial(b)<<endl;
        break;
        default:
            cout << "enter number 1-5, please" << endl;
            break;
    }

    return 0;
}
