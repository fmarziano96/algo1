#include <iostream>
using namespace std;

void prueba(int& x, int& y){
    x = x + y;
    y = x - y;
    x = 1/y;
}

int main () {
    int a = 10;
    prueba(a, a);
}