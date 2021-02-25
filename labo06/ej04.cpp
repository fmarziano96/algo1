#include <iostream>
#include <vector>
using namespace std;

// void
vector<vector<int>> trasponer(vector<vector<int>> m){
    vector<vector<int>> m0 = m;
    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++){
            m[i][j] = m0[j][i];
        }
    }
    return m;
}

void mostrarMatriz(vector<vector<int>> m){
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


int main () {
    vector<vector<int>> mat = {{1, 0, 0}, {0, 1, 0}, {2, 0, 2}};
    mostrarMatriz(trasponer(mat));
}