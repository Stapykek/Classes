#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

bool isPrime(int n){
    if (n==1) return 0;
    for (int i = 2; i <= sqrtf(n); i++){
        if (!(n%i)) return 0;
    }
    return 1;
}

int prodOfDigs(int n){
    int prod = 1;
    while (n>0){
        prod *= n%10;
        n/=10;
    }
    return prod;
}

int main(){
    cout << "Лабораторная работа №6.\nВариант 9.\n1. \n";
    vector<int> a = {1,6,15,32,22,15};
    for (int i: a){
        if (isPrime(i)){
            sort(a.begin(),a.end());
            cout << "Нашли простое!\n";
            break;
        }
    }
    for(int i: a){
        cout << i << " ";
    }
    cout << "\n2. Введите n: ";
    int n;
    cin >> n;
    vector <pair<int,int>> b;
    cout << "Введите элементы массива а через пробел: ";
    for (int i = 0; i<n;i++){
        int tmp;
        cin >> tmp;
        b.push_back(make_pair(tmp,prodOfDigs(tmp)));
    }
    sort(b.begin(),b.end(), [](pair<int,int> a, pair<int,int> b){return a.second < b.second;});
    sort(b.begin(),b.end(), [](pair<int,int> a, pair<int,int> b){return a.second <= b.second && (to_string(a.first)[0] < to_string(b.first)[0]);});
    sort(b.begin(),b.end(), [](pair<int,int> a, pair<int,int> b){return a.second <= b.second && (to_string(a.first)[0] <= to_string(b.first)[0]) && (a.first < b.first);});
    for (int i = 0; i<n;i++){
        cout << "(" << b[i].first << ", " << b[i].second << ") ";
    }
    cout << "\n3.";
    vector <vector<int>> matr = {{1,2,3,4},{4,8,9,10}, {1,3,5,7}};
    int maxEven = 0;
    short foundInd = 0;
    int currCount;
    for (int i = 0; i<matr.size(); i++){ // перебираем все строки(сверху вниз)
    currCount = 0;
        for(int j = 0; j<matr[0].size();j++){ //перебираем строку(слева направо)
            if (matr[i][j] % 2 == 0){
                currCount +=1;
            }
        }
        if (currCount > maxEven){
            maxEven = currCount;
            foundInd = i;
        }
        currCount = 0;
    }
    cout << "найденная строка : (";
    for (int i = 0; i < matr[0].size(); i++){
        cout << matr[foundInd][i];
        matr[foundInd][i] *= matr[foundInd][i];
        cout << " => " << matr[foundInd][i];
        if (i!= matr[0].size() - 1) cout << ", ";
        
    }
    cout << ")\n";
    cout << "4. Введите длину последовательности N:";
    int N;
    cin >> N;
    vector <int> seq;
    seq.reserve(20000);
    cout << "Введите элементы последовательности: ";
    for (int i = 0; i<N;i++){
        int tmp;
        cin >> tmp;
        seq.push_back(tmp);
    }
    cout<<"начальная последовательность: ";
    for(int i : seq){
        cout << i << " ";
    }
    for(int i = 0;i<seq.size(); i++){
        if(prodOfDigs(seq[i]) == 180){
            swap(seq[i],seq[seq.size()-1]);
            seq.pop_back();
        }
    }
    
    for(int i = 0;i<seq.size();i++){
        if((to_string(seq[i])[0]) == '1' && seq[i]%10 == 1){
            seq.insert(seq.begin()+i,seq[i]);
            i+=1;
        }
    }
    cout << "\nитог: ";
    for(int i : seq){
        cout << i << " ";
    }
    return 0; 
}
//reserve - зараннее выделить память, чтобы постоянно не происходила реаллокация.