#include <iostream>

int main(){
    int val;
    start:
    std::cout << "Типы данных в C++. \n1 - целочисленные; \n2 - символьные; \n3 - вещественные;\n4 - логические \nВведите тип данных: "  ; 
    std::cin >> val;
    switch(val){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            std::cout << "Пожалуйста, введите число от 1 до 4\n";
            goto start;
            break;
    }
    return 0;
}