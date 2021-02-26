#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// Ej 1.1
bool divide(vector<int> v, int n){
    int cantDivVector = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] % n == 0){
            cantDivVector += 1;
        }
    }
    return cantDivVector == v.size();
}

// Ej 1.2
int maximo(vector<int> v){
    int max = v[0];
    for(int i = 0; i < v.size(); i++){
        if(v[i] >= max){
            max = v[i];
        }
    }
    return max;
}

// Ej 1.3
bool pertenece(int elem, vector<int> v){
    bool pertenece = false;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == elem){
            pertenece = true;
        }
    }
    return pertenece;
}

// Ej 1.4
void mostrarVector(vector<int> v){
    std::cout << "[";
    for(int i = 0; i < v.size(); i++){
        if(i < v.size() - 1){
            std::cout << v[i] << ", ";
        } else {
            std::cout << v[i] << "]" << std::endl;
        }
    }
}

// Ej 1.5
vector<int> sinImpares(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 == 1){
            v[i] = 0;
        }
    }
    return v;
}

// Ej 1.6
vector<int> limpiarDuplicados(vector<int> v){
    vector<int> v1, s;
    for(int i = 0; i < v.size(); i++){
        v1.push_back(v[i]);
        if(cantidad_apariciones(v[i], v1) == 1){
            s.push_back(v[i]);
        }
    }
    return s;
}

// Ej 1.7
vector<int> rotar(vector<int> v, int k){
    vector<int> s;
    if(k > v.size()){
        k = k % v.size();
    }
    for(int i = k; i < v.size(); i++){
        s.push_back(v[i]);
    }
    for(int j = 0; j < k; j++){
        s.push_back(v[j]);
    }
    return s;
}
/*vector<int> rotar (const vector<int>& v, int k){
    vector<int> res;
    for (int i = 0; i < v.size() - k; i++){
        res.push_back(v[i + k]);
    }
    for (int i = 0; i < k; i++){
        res.push_back(i);
    }
    return res;
}*/

// Ej 1.8
vector<int> reverso(vector<int> v){
    vector<int> s;
    int size = v.size() - 1;
    /*for(int i = size; i >= 0; i--){
        s.push_back(v[i]);
    }*/
    for(int i = 0; i < v.size(); i++){
        s.push_back(v[v.size() - 1 - i]);
    }
    return s;
}

// Ej 1.9
bool esPrimo(int n){
    int cant_divisores = 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cant_divisores++;
        }
    }
    return cant_divisores == 0;
}
vector<int> factoresPrimos(int n){
    vector<int> v;
    if(esPrimo(n)){
        v.push_back(n);
    } else {
        for(int i = 2; i < n; i++){
            if(n % i == 0 && esPrimo(i)){
                v.push_back(i);
            }
        }
    }
    return v;
}

// Ej 1.10
bool estaOrdenado(vector<int> v){
    return v;
}

// Ej 1.11
void mostrarVectorBools(vector<bool> v){
    std::cout << "[";
    for(int i = 0; i < v.size(); i++){
        if(i < v.size() - 1){
            std::cout << v[i] << ", ";
        } else {
            std::cout << v[i] << "]" << std::endl;
        }
    }
}
vector<bool> negar(vector<bool> &v){
    for(int i = 0; i < v.size(); i++){
        v[i] = !v[i];
    }
    return v;
}

// Ej 1.12
void mostrarVectorTuplas(vector<pair<int, int>> v){
    std::cout << "[";
    for(int i = 0; i < v.size(); i++){
        if(i < v.size() - 1){
            std::cout << "<" << v[i].first << ", " << v[i].second << ">" << ", ";
        } else {
            std::cout << "<" << v[i].first << ", " << v[i].second << ">" << "]" << std::endl;
        }
    }
}

int cantidad_apariciones(int elem, vector<int> v){
    int apariciones = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == elem){
            apariciones += 1;
        }
    }
    return apariciones;
}

vector<pair<int, int>> apariciones(vector<int> v){
    vector<pair<int, int>> s;
    vector<int> s1;
    for(int i = 0; i < v.size(); i++){
        s1.push_back(v[i]);
        if(cantidad_apariciones(v[i], s1) == 1){
            s.push_back({v[i], cantidad_apariciones(v[i], v)});
        }
    }
    return s;
}

// Ej 1.13
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

// Ej 1.14
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

int main (){
    std::cout << "Hello, World!" << std::endl;
    return 0;
}