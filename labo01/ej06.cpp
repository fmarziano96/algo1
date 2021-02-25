#include <iostream>
using namespace std;

/* Ejercicio 6 - Recursion */
int sumaImpares(int n){
    int sumaResult = 0;
    if(n == 1){
        return 1;
    } else if(n <= 0){
        return 0;
    } else {
        if(n % 2 == 0){
            sumaResult = (n-1) + sumaImpares(n-3);
        } else {
            sumaResult = n + sumaImpares(n-2);
        }
        return sumaResult;
    }
}
int sumaImparesWhile(int n){
    int sumaImpares = 0;
    int i = 1;
    while(i <= n){
        if(i % 2 == 1){
            sumaImpares = sumaImpares + i;
        }
        i = i + 1;
    }
    return sumaImpares;
}
int sumaImparesFor(int n){
    int sumaImpares = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            sumaImpares = sumaImpares + i;
        }
    }
    return sumaImpares;
}

int main () {
    std::cout << "El resultado es: " << sumaImpares(7) << std::endl;
    std::cout << "El resultado es: " << sumaImparesFor(7) << std::endl;
    std::cout << "El resultado es: " << sumaImparesWhile(7) << std::endl;
}