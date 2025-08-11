#include <iostream>

using namespace std;
// ponteiros são "variaveis" especiais
// um endereço de outra variável
int main() {

    int var1;
    int* pont1; // coloco o tipo da variavel que uqero "acessar" e este asterisco para dezer que é um ponteiro
    var1 = 5;
    pont1 = &var1; // o pont1 vai armazenar o endereço de var1
    cout << "var1 (através do nome): " << var1 << endl;
    cout << "endereco de var1: " << pont1 << endl; // imprime o endereço do primeiro byte da variavel
    cout << "valor da variavel através do ponteiro: " << *pont1 << endl;

    int var2;
    var2 = var1; // ou *pont1, ambos acessam o valor de var1
    cout << "var2 (através do nome): " << var2 << endl;

    *pont1 = 10; // altera o valor de var1 para 10
    cout << "var1 (através do nome): " << var1 << endl;
    
    var2 = 50;
    pont1 = &var2; // pont1 agora aponta para var2
    cout << "var2 (através do nome): " << var2 << endl;
    cout << "endereco de var2: " << pont1 << endl;
    cout << "valor da variavel através do ponteiro: " << *pont1 << endl;
    return 0;
}