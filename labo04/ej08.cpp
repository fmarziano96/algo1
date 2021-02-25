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

int main () {

    vector<int> v;
    v.push_back(3);
    v.push_back(12);
    v.push_back(9);
    v.push_back(18);
    v.push_back(21);
    mostrarVector(reverso(v));

    std::cout << "Hello, World!" << std::endl;
    return 0;

}