#include <iostream>
#include <vector>
#include "lab7.hpp"


int main(){
    std::cout << "Лабораторная работа №7. Вариант 9\n Введите порядок матрицы: ";
    int n;
    std::cin >> n;
    std::vector <std::vector <int>> mas = lab7::makeMatrOfSize(n);
    std::cout << "Начальная матрица:\n";
    lab7::printMatr(mas,n);
    if (lab7::checkCondition(mas,n)){
        std::cout << "Итоговая матрица:\n";
        lab7::sortIfHasEights(mas,n);
        lab7::printMatr(mas,n);
    }
    else std::cout << "Такой она и осталась.";
    return 0;
}   
//при обработке больших типов данных следует отправлять не значение объекта, а ссылку на него. Таким образом мы сохраняем память и время на лишние return'ы, копирования и т.д. 