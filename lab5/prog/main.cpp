#include <iostream>
#include <array>
#include <math.h>
using namespace std;

int main(){
    cout << "Лабораторная работа №5.\nВариант 9.\n1. ";
    long prod = 1;
    int maxnum;
    short saved = 0;
    int a;
    int A[] = {5, 6, 2, 5, 12, 32, 56, 55, 42};
    maxnum = -1 * pow(2,31);
    for (int i = 1; i<size(A); i++){
        a = A[i];
        if (a%10 == 2){
            if (a > maxnum){
                maxnum = a;
                saved = i; //нумерация в массиве идёт с 0.
            }
            prod *=a;
        }
    }
    cout << prod << " " << maxnum << " " << saved;
    cout << "\n2.";
    int N;
    short dig[10] = {0,0,0,0,0,0,0,0,0,0};
    cout << "Введите N: ";
    cin >> N;
    while (N/10>0){
        dig[N%10]+=1;
        N/=10; 
    } //считаем цифры числа
    dig[N]+=1; //досчитываем последнюю цифру
    short maxOccur = 0;
    short maxOccurNum = 0;
    for (short i=0;i<10;i++){
        if (dig[i] > maxOccur){
            maxOccur = dig[i];
            maxOccurNum = i;
        }
    }
    cout << maxOccurNum;
    return 0;
}