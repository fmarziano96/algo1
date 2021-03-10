#include <iostream>
#include "ejercicios.h"
#include <math.h>

using namespace std;

/************* Ejercicio 1 *************/
bool estaOrdenadoAsc(vector<int> v){
    int i=0;
    int longitud = v.size();
    bool esMenor = true;
    while(i<=longitud-2 && esMenor){
        esMenor = v[i] <= v[i+1];
        i++;
    }
    return i==longitud-1;
}

bool estaOrdenadoDesc(vector<int> v){
    int longitud = v.size();
    int i=0;
    bool esMayor = true;
    while(i<=longitud-2 && esMayor){
        esMayor = v[i] >= v[i+1];
        i++;
    }
    return i==longitud-1;
}
bool estaOrdenado(vector<int> v){
    int longitud = v.size();
    if (longitud==0 || longitud==1)
        return true;
    else
        return estaOrdenadoDesc(v) || estaOrdenadoAsc(v);
}

/************* Ejercicio 2 *************/
bool pertenece(int elemento, vector<int> v){
    int longitud = v.size();
    if(longitud==0) {
        return false;
    } else {
        int i=0;
        bool sigo = true;
        while((i<longitud) && sigo){
            sigo = (v[i]!=elemento);
            i++;
        }
        //return i<longitud;
        return i<longitud || (i==longitud && sigo == false);
    }
}

/************* Ejercicio 3 *************/
long fibonacci(int k){
    if(k==0) {
        return 0;
    } else if(k==1) {
        return 1;
    } else {
        long i = 0;
        long j = 0;
        long m = 1;
        int nesimo;
        for(nesimo=1; nesimo<=k; nesimo++){
            i = m;
            m = j;
            j = i + m;
        }

        return j;
    }
}

/************* Ejercicio 4 *************/
// Pc : |s| > 0 ∧ res = 0 ∧ i = 0 ∧ s[0] = 0
// I : 0 <= i < |s| ∧L res = Σ from k=0 to i-1 (if(s[k] mod 2 = 0 ∧ s[k] >= 0) then s[k]*2 else 0 fi)
// Qc : i = |s| ∧ res = Σ from k=0 to |s|-1 (if(s[k] mod 2 = 0 ∧ s[k] >= 0) then s[k]*2 else 0 fi)
int sumaDoble(vector<int> s){
    int res=0;
    int i = 0;
    while(i < s.size()){
        if(s[i]>=0 && s[i]%2==0)
            res = res + (s[i]*2);
        i++;
    }
    return res;
}

/************* Ejercicio 5 *************/
// Pc : |s| >= 3 ∧ res = false ∧ i = 1
// I : 1 <= i < |s|-1 ∧L res = true <=> (∃k:Z)(1 <= k < i ∧L (v[k] > v[k-1] && v[k] > v[k+1])
// Qc : i = |s|-1 ∧L res = true <=> (∃k:Z)(1 <= k < i ∧L v[k] > v[k-1] && v[k] > v[k+1])
bool existePico(vector<int> v){
    int i = 1;
    bool res = false;
    while(i<v.size()-1){
        res = res || (v[i] > v[i-1] && v[i] > v[i+1]);
        i++;
    }

    return res;
}

/************* Ejercicio 6 *************/
bool todosImpares(vector<int> v){
    bool res=true;
    int i = v.size()-1;
    while(i >= 0) {
        res = res && (v[i] % 2 == 1);
        i--;
    }
    return res;
}

/************* Ejercicio 7 *************/
bool esPrimo(int n){
    bool res = true;
    for(int i = 2; i < n; i ++){
        if(n % i == 0){
            res = false;
        }
    }
    return res;
}

int sumaPrimos(int n){
    int suma = 0;
    int i = n;
    while(i > 2) {
        if (esPrimo(i)) {
            suma = suma + i;
        }
        i--;
    }
    return suma;
}


/************* Ejercicio 8 *************/
int indiceMinimoSubsec(vector<int> v, int i, int j){
    int res = i;
    while(i <= j){
        if(v[i] <= v[res]){
            res = i;
        }
        i++;
    }
    return res;
}


/************* Ejercicio 9 *************/
int sumatoria(vector<int> v) {
    int i = 1;
    int suma = 0;
    if(v.size() > 0){
        int mitad = v.size()/2;
        suma = v[mitad];
        while(i <= mitad){
            suma += (v[mitad - i] + v[mitad + i]);
            i++;
        }
    }
    return suma;
}

int sumatoria2(vector<int> v){
    int i = 0;
    int suma = 0;
    while(i < v.size()){
        suma += v[i];
    }
    return suma;
}


/************* Ejercicio 10 *************/

void ordenar(vector<int>& v){
    int i = 0;
    int pos;
    while(i < v.size()){
        pos = indiceMinimoSubsec(v, i, v.size()-1);
        int v_i = v[i];
        int min = v[pos];
        v[i] = min;
        v[pos] = v_i;
        i++;
    }
}


/************* auxiliar *************/

string mostrarVector(vector<int> v){
    string res = "[";
    for(int i = 0; i < v.size()-1; i++){
        res = res + to_string(v[i]) + ", ";
    }
    if(v.size() > 1){
        res = res + to_string(v[v.size()-1]) ;
    }
    res += "]";
    return res;
}
