#include <iostream>
using namespace std;

// Versión Recursiva
int f1(int n){
    if(n == 0){
        return 0;
    } else if(n == 1){
        return 1;
    } else {
        return f1(n-1) + f1(n-2);
    }
}

// Versiones Iterativas

int f2(int n){
    int s1 = 0;
    int s2 = 1;
    for(int i = 1; i < n; i = i + 1){
        int temp = s1;
        s1 = s2;
        s2 = temp + s2;
    }
    return s2;
}

int f3(int n){
    int i = 1;
    int s1 = 0;
    int s2 = 1;
    while(i < n){
        int temp = s1;
        s1 = s2;
        s2 = temp + s2;
        i = i + 1;
    }
    return s2;
}

int main () {
    std::cout << "El resultado es: " << f1(6) << std::endl;
    std::cout << "El resultado es: " << f2(3) << std::endl;
    std::cout << "El resultado es: " << f3(3) << std::endl;

    return 0;
}