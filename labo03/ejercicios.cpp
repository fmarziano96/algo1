#include <iostream>
#include <fstream>
using namespace std;

// Ej 1
bool esPrimo(int n){
    int cant_divisores = 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cant_divisores += 1;
        }
    }
    return cant_divisores == 0;
}

// Ej 2
void escribirArchivo(int a, int b, float f, float g){
    ofstream fout;
    fout.open("salida.txt");
    fout << a << ", " << b << ", " << f << ", " << g << endl;
    fout.close();
}

// Ej 3
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

// Ej 4
void leerNumeros2(){
    ifstream fn;
    fn.open("numeros.txt");
    while(!fn.eof()){
        int a;
        fn >> a;
        std::cout << a << std::endl;
    }
    fn.close();
}

// Ej 5
void prueba(int& x, int& y){
    x = x + y;
    y = x - y;
    x = 1/y;
}

// Ej 6
void swap(int& a, int& b){
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
}

// Ej 7
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

// Ej 8
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

// Ej 9
void primosGemelos(int n, int& res1, int& res2){
    int i = 0;
    ofstream fout;
    fout.open("primos.txt");
    while(i < n){
        if(esPrimo(res1) && esPrimo(res1 + 2)){
            res2 = res1 + 2;
            fout << "(" << res1 << ", " << res2 << ")" << " ";
            res1++;
            i++;
        } else {
            res1++;
        }
    }
    fout.close();
}

int main () {

    int p;
    cin >> p;
    if(esPrimo(p)){
        std::cout << "El numero ingresado es primo" << std::endl;
    } else {
        std::cout << "El numero ingresado no es primo" << std::endl;
    }

    escribirArchivo(2, 5, 2.5, 1.5);

    int x = 10;
    prueba(x, x);

    int a;
    int b;
    cin >> a;
    cin >> b;
    swap(a, b);

    int pasos = 1;
    int n;
    cin >> n;
    collatz(n, pasos);

    int res1 = 2;
    int res2 = 0;
    primosGemelos(10, res1, res2);
}