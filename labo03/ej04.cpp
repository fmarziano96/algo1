#include <iostream>
#include <fstream>
using namespace std;

void leerNumeros(){
    ifstream fn;
    fn.open("numeros.txt");
    while(!fn.eof()){
        int a;
        fn >> a;
        std::cout << a << std::endl;
    }
    fn.close();
}

int main () {
    leerNumeros();
}