#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int cantidad_apariciones(int elem, vector<int> v){
    int apariciones = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == elem){
            apariciones += 1;
        }
    }
    return apariciones;
}



// rgb(108, 171, 221)
// rgb(0, 87, 184)

void interseccion(){
    string file1;
    string file2;
    cin >> file1;
    cin >> file2;
    ifstream fin1;
    ifstream fin2;
    fin1.open(file1);
    fin2.open(file2);


    
    fin1.close();
    fin2.close();

}

int main () {
    interseccion();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}