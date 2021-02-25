#include <iostream>
#include <vector>
using namespace std;

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

int cantidad_apariciones(int elem, vector<int> v){
    int apariciones = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == elem){
            apariciones += 1;
        }
    }
    return apariciones;
}

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

int main () {

    vector<int> s1;
    s1.push_back(1);
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(1);
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(3);
    s1.push_back(2);
    s1.push_back(3);
    s1.push_back(3);
    mostrarVector(limpiarDuplicados(s1));

    std::cout << "Hello, World!" << std::endl;
    return 0;

}