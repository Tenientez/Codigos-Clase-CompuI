// Autor: Oscar Teniente
// tenienteornelas@gmail.com

#include <iostream>
#include <array>

using namespace std;

const int n = 10;
array<int, n> A = {5, 4, 6, 9, 15, 2, 3, 5, 9, 15};
int max();
int  max(){
    int max = -99999999;
    for(int i =0; i < A.size();i++ ){
        if(A[i] > max){
            max = A[i];
        }
        cout << "El elemento maximo es : " << max() << endl;
    }
    return max;