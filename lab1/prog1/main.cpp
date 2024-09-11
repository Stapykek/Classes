#include <iostream>

int main(){
    char * val = new char[1];
    std::cout << "Типы данных в C++. \n1 - целочисленные; \n2 - символьные; \n3 - вещественные;\n4 - логические \nВведите тип данных: "  ; 
    start:
    std::cin >> val;
    switch(val[0]){
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        default:
            std::cout << "Пожалуйста, введите число от 1 до 4: ";
            goto start;
    }
    return 0;
}