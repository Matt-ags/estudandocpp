/*fazer a "função" f(a)=x**2-3x+5; */

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    cout << "CALCULADORA DE FUNÇÃO" << endl;
    cout << "f(a) = x^2 - 3x + 5";

    int x;
    cout << endl;
    cout << "Digite o valor de x: ";
    cin >> x;
    // f(a) = x^2 - 3x + 5
    int resultado = pow(x, 2) - 3 * x + 5;
    cout << "O resultado de f(" << x << ") é: " << resultado << endl;

    return 0;
}