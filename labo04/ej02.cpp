#include <iostream>
#include <vector>
using namespace std;

int maximo(vector<int> v){
    int max = v[0];
    for(int i = 0; i < v.size(); i++){
        if(v[i] >= max){
            max = v[i];
        }
    }
    return max;
}

int main () {

    vector<int> v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(93);
    v.push_back(35);
    std::cout << maximo(v) << std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}