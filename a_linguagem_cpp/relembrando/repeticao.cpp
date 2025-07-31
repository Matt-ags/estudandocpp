#include <iostream>

using namespace std;

/*
pouco de teoria:
while:
while (condição) {
    comandos
}

do...while:
ele faz pelo menos uma vez
do{
    comandos
} while (condição);

for:
for (inicio; final; incremento) {
    comandos
}
*/

int main() {
    // vamos pedir pro usuario diginar um numero, e vamos mosytrar a soma dos numeros inteiros até ele
    // tipo, digitou 3, vai somar 0 + 1 + 2 + 3

    int numero;
    cout << "Digite um número inteiro não negativo: ";
    cin >> numero;

    int soma = 0;
    int contador = 1;

    /*
    while(contador <= numero) {
        soma += contador; // só para clarear, estamos somando 0 + 1 no inciio, depois, somamos mais um no 1, e assim por diante
        contador++; // incremento
    }
    */

    /*
    do {
        soma += contador;
        contador++; // problema que esse aqui se colocamos 0, ele da 0+0=1

    } while (contador <= numero);
    */

    for (int i = 0; i <= numero; i++) {
        soma += i; // soma os numeros de 0 até o numero digitado
    }

    //break , usa para parar o loop

    cout << "A soma dos números inteiros de 0 até " << numero << " é: " << soma << endl;

    return 0;
}