#include <iostream>
#include <vector>
using namespace std;

void elevar(vector<vector<int>> &terreno, int x){
    for(int i = 0; i < terreno.size(); i++){
        for(int j = 0; j < terreno[i].size(); j++){
            terreno[i][j] += x;
        }
    }
}

bool sobresalen(vector<vector<int>> terreno, int n, int& mts){
    bool res = false;
    int subacuaticos = 0;
    
    return res;
}

int main () {
    vector<vector<int>> terreno = { };
    int n = 3;
    int mts;
    std::cout << sobresalen(terreno, n, mts) << std::endl;
}