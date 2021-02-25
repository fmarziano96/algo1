#include <iostream>
#include <vector>
using namespace std;

bool divide(vector<int> v, int n){
    int cantDivVector = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] % n == 0){
            cantDivVector += 1;
        }
    }
    return cantDivVector == v.size();
}

int main() {

    vector<int> v;
    v.push_back(3);
    v.push_back(12);
    v.push_back(9);
    v.push_back(18);
    v.push_back(21);
    v.push_back(5);

    std::cout << divide(v,3) << std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}