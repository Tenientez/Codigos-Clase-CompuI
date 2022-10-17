// Autor: Teniente Ornelas Oscar Manuel
// tenienteornelas@gmail.com

#include <iostream>
#include <array>

using namespace std;

//Definicion variables
const int n = 10;
int max();
int min();
void Arreglo(array<int, n> A);
array<int, n> repetidos();

//Arreglo
array<int, n> A = {9, 10, 6, 3, 8, 4, 3, 10, 9, 6};

//Impresiones
int main() {

    cout << "Arreglo:" << endl;
    Arreglo(A);
    cout << "\nMinimo: " << min() << endl;
    cout << "Maximo: " << max() << endl;
    array<int, n> R {0};
    R= repetidos();

    cout << "\nArreglo sin elementos repetidos:" << endl;
    Arreglo (R);
    return 0;
}

//Arreglo
void Arreglo(array<int, n> A){
    for(int i = 0; i<A.size(); i++){
        if(A[i]!=0)
            cout<< A[i] << " ";
    }
}

//Máximo
int  max(){
    int max = -99999999;
    for(int i =0; i < A.size();i++ ){
        if(A[i] > max){
            max = A[i];
        }
    }
    return max;
}
//Mínimo
int min(){
    int min = 99999999;
    for(int i =0; i < A.size();i++ ){
        if(A[i]< min){
            min = A[i];
        }
    }
    return min;
}

//Variables repetidas
array<int, n> repetidos(){
    array<int, n> R {0};
    int insertIndex = 0;
    for(int i = 0; i < A.size(); i++){
        bool presente = 0;
        for(int j = 0; j <R.size(); j++){
            if(A[i] == R[j]){
                presente = 1;
            }
        }
        if(presente == 0){
            R[insertIndex] = A[i];
            insertIndex ++;
        }
    }
    return R;
}

