#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Лабораторная работа №2\n Вариант 9. Поиск площади треугольника\n";
    double A,B;
    float a;
    cout << "Введите длину стороны A: ";
    cin >> A;
    cout << "Введите длину стороны B: ";
    cin >> B;
    cout << "Введите величину угла a (в градусах): ";
    cin >> a;
    double pi = acos(-1);
    a = pi * a / 180; //переводим в радианы
    double area = A*B*sin(a)/2;
    cout << "Площадь треугольника: " << area;
    return 0;
}