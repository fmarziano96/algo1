#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void cantidadApariciones(string rutaArchivoIn, string rutaArchivoOut){
    ifstream fin;
    ifstream fin2;
    ofstream fout;
    fin.open(rutaArchivoIn);
    fout.open(rutaArchivoOut);
    while(!fin.eof()){
        int a;
        fin >> a;
    }

    fin.close();
    fout.close();
}

int main () {
    cantidadApariciones("apariciones.txt", "apariciones_out.txt");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}