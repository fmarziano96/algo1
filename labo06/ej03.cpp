#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> resizeMatriz(vector<vector<int>> a, int f, int c){
    vector<vector<int>> mat;
    vector<int> v;
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a[i].size(); j++){
            v.push_back(a[i][j]);
            if(v.size() == c){
                if(mat.size() < f){
                    mat.push_back(v);
                }
                while(v.size() > 0){
                    v.pop_back();
                }
            }
        }
    }
    return mat;
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
    vector<vector<int>> m = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    mostrarMatriz(resizeMatriz(m, 2, 6));
    //std::cout << resizeMatriz(m, 2, 6) << std::endl;
}