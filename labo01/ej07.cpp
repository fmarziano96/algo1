#include <iostream>
using namespace std;

int sumaDivisoresHasta(int n, int k){
    int sumaDivs = 0;
    if(k <= n){
        if(k == 1){
            return 1;
        } else {
            if(n % k == 0){
                sumaDivs = k + sumaDivisoresHasta (n, (k - 1));
            } else {
                sumaDivs = sumaDivisoresHasta (n, (k - 1));
            }
            return sumaDivs;
        }
    } else {
        if(n == 1){
            return 1;
        } else {
            if(k % n == 0){
                sumaDivs = n + sumaDivisoresHasta (k, (n - 1));
            } else {
                sumaDivs = sumaDivisoresHasta (k, (n - 1));
            }
            return sumaDivs;
        }
    }
}
int sumaDivisores(int n){
    return sumaDivisoresHasta(n, n);
}
int sumaDivisoresWhile(int n){
    int i = 1;
    int sumaDivisores = 0;
    while(i <= n){
        if(n % i == 0){
            sumaDivisores = sumaDivisores + i;
        }
        i = i + 1;
    }
    return sumaDivisores;
}
int sumaDivisoresFor(int n){
    int sumaDivisores = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            sumaDivisores = sumaDivisores + i;
        }
    }
    return sumaDivisores;
}

int main () {
    std::cout << "El resultado es: " << sumaDivisores(12) << std::endl;
    std::cout << "El resultado es: " << sumaDivisoresFor(12) << std::endl;
    std::cout << "El resultado es: " << sumaDivisoresWhile(12) << std::endl;
}