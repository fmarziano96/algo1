#include <iostream>
#include <vector>
using namespace std;

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

int prodEscalar(vector<int> v1, vector<int> v2){
    int res = 0;
    if(v1.size() == v2.size()){
        int i = 0;
        while(i < v1.size()){
            res += v1[i]*v2[i];
            i++;
        }
    }
    return res;
}

vector<vector<int>> transponerMatriz(vector<vector<int>> m){
    vector<vector<int>> res(m[0].size(), vector<int>(m.size(), 0));
    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++){
            res[j][i] = m[i][j];
        }
    }
    return res;
}

vector<vector<int>> multMatrices(vector<vector<int>> a, vector<vector<int>> b){
    vector<vector<int>> res(a.size(), vector<int>(b[0].size(), 0));
    if(b.size() == a[0].size()){
        for(int i = 0; i < a.size(); i++){
            for(int j = 0; j < a[i].size(); j++) {
                for (int k = 0; k < b.size(); k++) {
                    res[i][k] += a[i][j] * b[j][k];
                }
            }
        }
    }
    return res;
}

int main() {
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(1);
    std::cout << prodEscalar(v1, v2) << std::endl;

    vector<vector<int>> m = { {1, 4, 5}, {2, 3, 1}, {0, 2, 1} };
    std::cout << "Hello, World!" << std::endl;
    //mostrarMatriz(transponerMatriz(m));
    mostrarMatriz(multMatrices(m, transponerMatriz(m)));
    //return 0;
}