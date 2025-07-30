#include <iostream>
using namespace std;
// vamos chamar a biblioteca de potencia
#include <math.h>

int main() {
    int a=2,b=6;
    
    int soma = a + b; 
    // caso eu não queira gastar memoria, tipo, declarar variavel, e depois ter que mostarr, poderia só "chamar a soma"
    // cout << "Soma: " << a + b << endl; 
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = b / a;
    int resto = b % a;

    // usando biblioteca

    float potencia = pow(a, b); // 2 elevado a 6

    // incremento e decremento

    cout << "Valor de a: " << a << endl;
    a++; // incremento
    cout << "Valor de a após incremento: " << a << endl;

    cout << "Valor de b: " << b << endl;
    b--; // decremento
    cout << "Valor de b após decremento: " << b << endl;

    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Multiplicação: " << multiplicacao << endl;
    cout << "Divisão: " << divisao << endl; // só não entendi muito bem sobre a questão de divisão ou quociente (se não for float, não divide)'
    cout << "Resto: " << resto << endl;
    cout << "Potência: " << potencia << endl;

    return 0;

}