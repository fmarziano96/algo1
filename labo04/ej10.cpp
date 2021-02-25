#include <iostream>
#include <vector>
using namespace std;

bool estaOrdenado(vector<int> v){
    int orden = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] <= v[i+1]) {
            orden += 1;
        }
    }
    return orden == v.size();
}

int main () {

    vector<int> v;
    v.push_back(1);
    v.push_back(71);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);

    std::cout << estaOrdenado(v) << std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;

}