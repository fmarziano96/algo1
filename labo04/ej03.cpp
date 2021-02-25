#include <iostream>
#include <vector>
using namespace std;

bool pertenece(int elem, vector<int> v){
    bool pertenece = false;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == elem){
            pertenece = true;
        }
    }
    return pertenece;
}

int main () {

    vector<int> v;
    v.push_back(3);
    v.push_back(7);
    v.push_back(8);
    v.push_back(12);
    v.push_back(23);
    v.push_back(5);
    int elem = 17;

    std::cout << pertenece(elem, v) << std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}