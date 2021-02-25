#include <iostream>
#include <fstream>
using namespace std;

bool esPalindromo(string p1){
    int contadorLetras = 0;
    for(int i = 0; i < p1.length()/2; i++){
        if(p1[p1.length() - 1 - i] == p1[i]){
            contadorLetras += 1;
        }
    }
    return contadorLetras == (p1.length() / 2);
}

void palindromos(string rutaArchivoIn, string rutaArchivoOut){
    ifstream fin;
    fin.open(rutaArchivoIn);
    ofstream fout;
    fout.open(rutaArchivoOut);
    while(!fin.eof()){
        string p1;
        string p1Mayus;
        fin >> p1;
        if(esPalindromo(p1)){
            for(int i = 0; i < p1.length(); i++){
                p1Mayus = toupper(p1[i]);
                fout << p1Mayus;
            }
            fout << endl;
        }
    }
    fin.close();
    fout.close();
}

int main () {

    palindromos("palindromos.txt", "palindromos_out.txt");

    std::cout << "Hello, World!" << std::endl;
    return 0;
}