#include <iostream>
#include <vector>
using namespace std;

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

void negar(vector<bool> &v){
    for(int i = 0; i < v.size(); i++){
        if(v[i] == true){
            v[i] = false;
        } else {
            v[i] = true;
        }
    }
    mostrarVectorBools(v);
}

int main () {

    vector<bool> b;
    b.push_back(false);
    b.push_back(true);
    b.push_back(false);
    b.push_back(true);
    b.push_back(false);
    b.push_back(true);
    negar(b);

    std::cout << "Hello, World!" << std::endl;
    return 0;

}