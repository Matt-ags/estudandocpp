/*
uma função que calcula o fatorial de um numero inteiro positivo informado pelo usuario
*/

#include <iostream>

using namespace std;

int main() {
    int numero, fatorial;

    cout << "Calculadora de Fatorial" << endl;
    cout << "Informe um número inteiro positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Número inválido! Informe um número inteiro positivo." << endl;
        return 1;
    }
    fatorial = 1;
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    cout << "O fatorial de " << numero << " é " << fatorial << endl;
    return 0;
}