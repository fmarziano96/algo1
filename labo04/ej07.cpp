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

int main () {

    vector<int> s;
    s.push_back(1);
    s.push_back(2);
    s.push_back(3);
    s.push_back(4);
    s.push_back(5);
    s.push_back(6);
    mostrarVector(rotar(s, 2));

    std::cout << "Hello, World!" << std::endl;
    return 0;

}