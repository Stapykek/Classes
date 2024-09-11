#include <iostream>
using namespace std;
void tellint(){
    cout << "Целочисленные типы данных\n";
    cout << "Тип short.\n Размер: 2 байта \n Диапазон значений: от -32768 до 32677.\n";
    short a = -32768;
    short b = 23477;
    cout << "Тип unsigned short.\n Размер: 2 байта \n Диапазон значений: от 0 до 65535.\n";
    unsigned short c = b - a;
    cout << b << " - (" << a << ") = " << c << endl;
    cout << "Тип int.\n Размер: 4 байта \n Диапазон значений: от -2147483648 до 2147483647.\n";
    int d = (-35) * 3228;
    cout << "(-35) * 3228 = " << d << endl;
    cout << "Тип unsigned int.\n Размер: 4 байта \n Диапазон значений: от 0 до 4294967295.\n";
    unsigned int e = 15 * 2312;
    cout << "15 * 2312 = " << e << endl;
    cout << "Тип long.\n Размер: 4 байта \n Диапазон значений: от -2147483648 до 2147483647.\n";
    long f = c*d;
    cout << c << " * (" << d << ") = " << f << endl;
    cout << "Тип unsigned long.\n Размер: 4 байта \n Диапазон значений: от 0 до 4294967295.\n";
    unsigned long g = f * a;
    cout << "(" << f << ") * (" << a << ") = " << g << endl;
    cout << "Тип long long.\n Размер: 8 байтов \n Диапазон значений: от −9223372036854775808 до 9223372036854775807.\n";
    long long h = -4503599627370496;
    long long i = h*b;
    cout << "(" << h << ") * " << b << " = " << i << endl;
    cout << "Тип unsigned long long.\n Размер: 8 байтов \n Диапазон значений: от 0 до 18446744073709551615.\n"; //18 квинтиллионов
    long long j = h/a;
    cout << "(" << h << ") / (" << a << ") = " << j << endl; 
    cout << "Результат деления целых чисел - всегда целое число, поэтому: 11/3 = " << 11/3;
}

void tellchar(){
    cout << "Символьные типы данных\n";
    cout << "Тип char.\n Размер: 1 байт\n Диапазон значений: от -128 до 127.\n";
    cout << "Тип signed char.\n Размер: 1 байт\n Диапазон значений: от -128 до 127.\n";
    cout << "Тип unsigned char.\n Размер: 1 байт\n Диапазон значений: от 0 до 255.\n";
    cout << "В арифметических операциях переменные символьных типов ведут себя как целочисленные переменные, поскольку в них помещается ASCII-код символа.\n";
    char a = 'a';
    unsigned char b = 'e';
    cout << a << "(97) + " << b << "(101) = " << a+b << endl;
}

void tellreal(){
    cout << "Вещественные типы данных\n";
    cout << "Тип float.\n Размер: 4 байта\n Диапазон значений: от 3,4 * 10^(-38) до 3,4 * 10^38.\n Точность: до 6 цифр после запятой \n";
    float a = 10;
    float b = 3;
    cout << a << " / " << b << " = " << a/b << endl;
    cout << "Тип double.\n Размер: 8 байт\n Диапазон значений: от 1,7 * 10^(-308) до 1,7 * 10^308.\n Точность: до 15 цифр после запятой \n";
    double c = 13.37 * 4.20;
    cout << "13.37 * 4.2 = " << c << endl; //я не нашёл, как увеличить количество отображаемых символов
    cout << "Тип long double.\n Размер: 8 байт\n Диапазон значений: от 1,7 * 10^(-308) до 1,7 * 10^308.\n Точность: до 15 цифр после запятой \n"; //по сути double и long double одинаковы между собой, но компилятор считает их разными типами данных.
}

void telllog(){
    cout << "Логические типы данных\n";
    cout << "Тип bool.\n Размер: 1 байт\n Принимает всего два значения: true и false.\n Эти значения обрабатываются в виде целых чисел: true = 1; false = 0\n";
    bool a = true;
    bool b = false;
    bool c = a*b;
    cout << a << " * " << b << " = " << c << endl;
    cout << a << " + " << a << " = " << a+a << endl;

}

int main(){
    char * val = new char[1];
    cout << "Типы данных в C++. \n1 - целочисленные; \n2 - символьные; \n3 - вещественные;\n4 - логические. \nВыберите тип данных(Введите число): "; 
    start:
    cin >> val;
    switch(val[0]){
        case '1':
            tellint();
            break;
        case '2':
            tellchar();
            break;
        case '3':
            tellreal();
            break;
        case '4':
            telllog();
            break;
        default:
            cout << "Пожалуйста, введите число от 1 до 4: ";
            goto start;
    }
    return 0;
}