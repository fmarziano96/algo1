#include <iostream>
using namespace std;

void swap(int& a, int& b){
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
}

int main () {
    int a;
    int b;
    cin >> a;
    cin >> b;
    swap(a, b);
}