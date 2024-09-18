#include <iostream>

using namespace std;

int main(){
    cout << "Лабораторная работа №4.\nВариант 9.\n";
    unsigned int a,b,c;
    cout << "1.\nВведите натуральное число a: ";
    cin >> a;
    cout << "Введите натуральное число b: ";
    cin >> b;
    cout << "Введите натуральное число c: ";
    cin >> c;
    if ( (a>b)&(b>c)){
        cout << (a-b-c);
    }
    else {
        if ( (b>a)&(b%c==0)){
            cout << (b/c) + (b - a);
        }
        else{
            cout << a + b + c;
        }
    }
    unsigned short n;
    cout << "\n2.Введите n: ";
    cin >> n;
    switch(n){
        case 0:
            cout << "OK.";
            break;
        case 1:
            cout << "Ошибка чтения файла.";
            break;
        case 2:
            cout << "Ошибка записи файла.";
            break;
        case 3:
            cout << "Не все поля определены.";
            break;
        default:
            cout << "Неверный код ошибки!";
    }
    short x;
    cout << "\n3.Введите x: ";
    cin >> x;
    switch(x){
        case (-1):
            cout << "Negative number";
            break;
        case 1:
            cout << "Positive number";
            break;
        default:
            cout << "Wrong number";
            break;
    }
    return 0;
}