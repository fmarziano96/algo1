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

vector<int> sinImpares(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 == 1){
            v[i] = 0;
        }
    }
    return v;
}
int main () {

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    mostrarVector(sinImpares(v));

    std::cout << "Hello, World!" << std::endl;
    return 0;

}
