#include <iostream>
#include <fstream>
using namespace std;

void promedios(string rutaArchivoIn1, string rutaArchivoIn2, string rutaArchivoOut){
    ifstream fin1;
    fin1.open(rutaArchivoIn1);
    ifstream fin2;
    fin2.open(rutaArchivoIn2);
    ofstream fout;
    fout.open(rutaArchivoOut);
    while(!fin1.eof() && !fin2.eof()){
        float n1;
        float n2;
        fin1 >> n1;
        fin2 >> n2;
        float promedio = (n1 + n2)/2;
        fout << promedio << " ";
    }
    fin1.close();
    fin2.close();
    fout.close();
}

int main () {
    promedios("promedios1.txt", "promedios2.txt", "promedios_out.txt");

    std::cout << "Hello, World!" << std::endl;
    return 0;
}