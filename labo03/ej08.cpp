#include <iostream>
#include <fstream>
using namespace std;

void sumaNumerosEnArchivos(){
    ifstream fn1;
    ifstream fn2;
    fn1.open("numeros1.txt");
    fn2.open("numeros2.txt");
    ofstream fout;
    fout.open("suma.txt");
    while(!fn1.eof() && !fn2.eof()){
        int a;
        int b;
        fn1 >> a;
        fn2 >> b;
        std::cout << a << " " << b << std::endl;
        int suma = a + b;
        fout << suma << " ";
        std::cout << suma << std::endl;
    }
    fn1.close();
    fn2.close();
    fout.close();
}

int main () {
    sumaNumerosEnArchivos();
}