#include <iostream>
using namespace std;

// vamos declarar t

int t; // UMA VARIAVEL GLOBAL, ou seja, existe em todo o programa

// vamos usar o define, uma constante

#define PI 3.14159 // uma constante, ou seja, não muda o valor

// podemos usar o define para fazer tipo um afunção

#define oi cout << "olá!\n" 

// quando vamos usar uma função que "vai mecher em nada"
// usamos void, ou seja, não retorna nada

void escrever() {
    cout << "Olá, Mundo!" << endl;
}

// e se quisermos começar colocar interatividade, ou seja, receber parametros????
// damos um tipo de saida!

int soma(int x, int y) {
    //int t;
    t = 1; 
    int soma = x + y; // UMA VARIAVEL LOCAL, ou seja, só existe dentro da função
    return soma; // retornamos o valor da soma
}

// e se vc quiser fazer uma ligação, tipo, ao mudar o a aqui, mude o a na função tb, usamos o "e comercial"

int subtrair(int &x, int &y) {
    int subtracao = x - y; 
    x = 0; // mudamos!!!
    y = 0; // mudamos!!!
    return subtracao; 
}

int main() {
    escrever(); 

    //int t;
    t = 0;

    int a=3, b=5;
    int s;
    s = soma(a, b); // chamamos a função soma, passando os valores
    cout << "A soma de " << a << " e " << b << " é: " << s << endl;

    cout << "Valor de a: " << a << endl; // 3
    cout << "Valor de b: " << b << endl; // 5

    int sub;
    sub = subtrair(a, b); // chamamos a função subtrair,
    cout << "A subtração: " << sub << endl;
    cout << "Valor de a após subtrair: " << a << endl; // 0
    cout << "Valor de b após subtrair: " << b << endl; // 0

    cout << "Valor de t: " << t << endl; // 0, se for definido dentro das funções, mas agora que esta global, é 1

    cout << "Valor de PI: " << PI << endl; // 3.14159, se for definido com define, não muda o valor

    oi; // uma funão que mostra o "oi"
    return 0;
}