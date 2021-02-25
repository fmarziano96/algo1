#include <iostream>
#include <fstream>
using namespace std;

void leerNumeros(){
    ifstream fn;
    fn.open("entrada.txt");
    int a;
    fn >> a;
    float f;
    fn >> f;
    std::cout << a << std::endl;
    std::cout << f << std::endl;
    fn.close();
}

int main () {
    leerNumeros();
}