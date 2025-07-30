#include <iostream>

using namespace std;

int main() {
    
    int inteiro = 10; // definimos o tipo, depois o nomeda variavel
    cout << "Inteiro: " << inteiro << endl;

    float real = 3.14; 
    cout << "Real: " << real << endl;

    double real2 = 5.1e22;
    cout << "Real2: " << real2 << endl;

    bool boolean = true; 
    cout << "Boolean: " << boolean << endl;

    char letra = 'A'; // aspas simples para char (se adicionamos mais, ele pega a ultima letra, interessante para o uso de vetores...)
    cout << "Letra: " << letra << endl;

    string texto = "Olá, Mundo!"; // aspas duplas para string
    cout << "Texto: " << texto << endl;

    // certo, vamos realizar algumas intereações

    int numero;
    // computador - interação
    cout << "Digite um número inteiro: ";
    cin >> numero; // entrada de dados, o que o usuario digitar vai ser atrib
    cout << "Você digitou: " << numero << endl;
    return 0;
}