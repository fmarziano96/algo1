#include <iostream>
#include <fstream>
using namespace std;

void collatz(int n, int &cantPasos){
    ofstream fout;
    fout.open("collatz.txt", ios_base::app);
    while(n > 1){
        if(n % 2 == 0){
            cantPasos += 1;
            fout << n << endl;
            std::cout << n << endl;
            n = n/2;
        } else {
            cantPasos += 1;
            fout << n << endl;
            std::cout << n << endl;
            n = 3 * n + 1;
        }
    }
    fout << n << endl;
    std::cout << n << endl;
    fout << "Cantidad de pasos: " << cantPasos << endl;
    std::cout << "Cantidad de pasos: " << cantPasos << std::endl;
    fout.close();
}

int main () {
    int pasos = 1;
    int n;
    cin >> n;
    collatz(n, pasos);

}