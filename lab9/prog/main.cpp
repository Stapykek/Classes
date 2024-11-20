#include <iostream>

int main(){

    int n;
    std::cout << "Введите n: ";
    std::cin >> n;
    unsigned char* p = (unsigned char*)(&n) + 3;
    for (int i = 0; i<4;i++){
        std::cout << "Байт " << i+1 << " (или " << 4-i << "): " << int(unsigned char(*(p))) << "\n";
        p--;
    }
}