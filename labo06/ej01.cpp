#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> mostrarMatriz(vector<vector<int>> m){
    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++){
            if(j < m[i].size() - 1){
                std::cout << m[i][j] << "\t";
            } else {
                std::cout << m[i][j] << "\n";
            }
        }
    }
}

int main() {
    vector<vector<int>> m = { {1, 2, 3}, {1, 2, 3}, {1, 2, 3} };
    mostrarMatriz(m);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}