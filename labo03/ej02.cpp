#include <iostream>
#include <fstream>
using namespace std;

void escribirArchivo(int a, int b, float f, float g){
    ofstream fout;
    fout.open("salida.txt");
    fout << a << ", " << b << ", " << f << ", " << g << endl;
    fout.close();
}

int main () {
    escribirArchivo(2, 5, 2.5, 1.5);
}