#include <iostream>
using namespace std;

bool ej4(int n){
    int divisores = 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            divisores = divisores + 1;
        }
    }
    return divisores == 0;
}

int main () {
    std::cout << "El resultado es: " << ej4(5) << std::endl;
    return 0;
}