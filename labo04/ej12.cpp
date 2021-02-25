#include <iostream>
#include <vector>
using namespace std;

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

    mostrarVectorTuplas(apariciones(s1));

    std::cout << "Hello, World!" << std::endl;
    return 0;
}