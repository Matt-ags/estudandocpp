// função que receba dois ponteiros
// troca o valor de referencia entre os dois

#include <iostream>
using namespace std;

int* ponteiro1;
int* ponteiro2;

void troca(int*& ponteiro1, int*& ponteiro2){
    int* pont3 = ponteiro1; // assim funciona, mas que estranho...
    ponteiro1 = ponteiro2;
    ponteiro2 = pont3;

}

int main(){

    int var1 = 1;
    int var2 = 2;

    ponteiro1 = &var1;
    ponteiro2 = &var2;

    cout << "(antes) Ponteiro 1, valor: " << *ponteiro1 << endl;
    cout << "(antes) Ponteiro 2, valor: " << *ponteiro2 << endl;

    troca(ponteiro1, ponteiro2);

    cout << "(depois) Ponteiro 1, valor: " << *ponteiro1 << endl;
    cout << "(depois) Ponteiro 2, valor: " << *ponteiro2 << endl;

    return 0;
}