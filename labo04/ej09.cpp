#include <iostream>
#include <vector>
using namespace std;

void mostrarVector(vector<int> v){
    std::cout << "[";
    for(int i = 0; i < v.size(); i++){
        if(i < v.size() - 1){
            std::cout << v[i] << ", ";
        } else {
            std::cout << v[i] << "]" << std::endl;
        }
    }
}

bool esPrimo(int n){
    int cant_divisores = 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cant_divisores++;
        }
    }
    return cant_divisores == 0;
}

vector<int> factoresPrimos(int n){
    vector<int> v;
    if(esPrimo(n)){
        v.push_back(n);
    } else {
        for(int i = 2; i < n; i++){
            if(n % i == 0 && esPrimo(i)){
                v.push_back(i);
            }
        }
    }
    return v;
}

int main () {
    mostrarVector(factoresPrimos(144));

    std::cout << "Hello, World!" << std::endl;
    return 0;
}