#include <iostream>
#include <vector>
using namespace std;
// i - 1 <= a <= i + 1
// j - 1 <= b <= j + 1
// m[i][j] > m[a][b] => m[i][j] > m[i-1][j-1] && m[i][j] > m[i][j-1] && m[i][j] > m[i-1][j]
// && m[i][j] > m[i][j+1] && m[i][j] > m[i+1][j] && m[i][j] > m[i+1][j+1]

int contarPicos(vector<vector<int>> m){
    int cantidad_picos = 0;
    for(int a = 1; a < m.size() - 1; a++){
        for(int b = 1; b < m[a].size() - 1; b++){
            if(m[a][b] > m[a-1][b-1] && m[a][b] > m[a][b-1] && m[a][b] > m[a-1][b] && m[a][b] > m[a][b+1] && m[a][b] > m[a+1][b] && m[a][b] > m[a+1][b+1]){
                cantidad_picos++;
            }
        }
    }
    return cantidad_picos;
}

int main () {
    vector<vector<int>> m = { {1, 2, 1}, {3, 4, 2}, {5, 7, 2}};
    std::cout << contarPicos(m) << std::endl;
}