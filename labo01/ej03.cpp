#include <iostream>
using namespace std;

int ej3(int x, int y){
    int res;
    if(x > y){
        res = x + y;
    } else {
        res = x * y;
    }
    return res;
}

int main () {
    std::cout << "El resultado es: " << ej3(10, 11) << std::endl;
    return 0;
}