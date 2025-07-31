/*
algoritmo que calcula a potencia b**e
b é real, n é natural, e ao mostrar o resultado da potencia, pergunta se quer calcular outra
*/

#include <iostream>

using namespace std;

float calculaPotencia(float base, int expoente) {
    float resultado = 1.0;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {

    cout << "Calculadora de Potência" << endl;
    cout << "Informe a base (b) e o expoente (n)." << endl;
    cout << "----------------------------------" << endl;

    float base;
    int expoente;

    cout << "Informe a base (b): ";
    cin >> base;
    cout << "Informe o expoente (n): ";
    cin >> expoente;

    float resultado = calculaPotencia(base, expoente);
    
    cout << base << "^" << expoente << " = " << resultado << endl;

    char continuar;
    cout << "Deseja calcular outra potência? (s/n): ";
    cin >> continuar;

    if (continuar == 's' || continuar == 'S') {
        main();
    } else {
        cout << "Obrigado por usar a calculadora de potência!" << endl;
    }

    return 0;
}