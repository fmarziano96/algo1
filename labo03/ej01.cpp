#include <iostream>
using namespace std;

bool esPrimo(int n){
    int cant_divisores = 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cant_divisores += 1;
        }
    }
    return cant_divisores == 0;
}

int main () {
    int n;
    cin >> n;
    if(esPrimo(n)){
        std::cout << "El numero ingresado es primo" << std::endl;
    } else {
        std::cout << "El numero ingresado no es primo" << std::endl;
    }
}