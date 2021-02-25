#include <iostream>
#include <fstream>
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

void primosGemelos(int n, int& res1, int& res2){
    int i = 0;
    ofstream fout;
    fout.open("primos.txt");
    while(i < n){
        if(esPrimo(res1) && esPrimo(res1 + 2)){
            res2 = res1 + 2;
            fout << "(" << res1 << ", " << res2 << ")" << " ";
            res1++;
            i++;
        } else {
            res1++;
        }
    }
    fout.close();
}

int main () {
    int res1 = 2;
    int res2 = 0;
    primosGemelos(10, res1, res2);
}