#include <iostream>
#include <cstddef>

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
    cout << "var1 (através do nome): " << var1 << endl; // var1 agora é 10, mesmo sem ter chamado ela diretamente
    
    // podemos trocar para onde o ponteiro aponta
    var2 = 50;
    pont1 = &var2; // pont1 agora aponta para var2
    cout << "var2 (através do nome): " << var2 << endl;
    cout << "endereco de var2: " << pont1 << endl;
    cout << "valor da variavel através do ponteiro: " << *pont1 << endl;

    //int *pont2; // dessa forma, o pontgeiro aponta para algum lugar, uma memória que não faz parte do programa
    // para não termos este vazamento, temos que dizer pro ponteiro apontar para o vazio
    //pont2 = NULL;
    //cout << *pont2; // com asterisco, como o valor é nada, o endereço é 0, e o valor é nada, poois "não existe"

    int *pont3 = new int; // ja separei um espaço na memória para o ponteiro, um inteiro
    // consequentemente, a unica forma de acessar o valor é através do ponteiro
    *pont3 = 35;
    cout << "valor do ponteiro: " << *pont3 << endl; 

    *pont3 = *pont1; // atribui o valor de var1 (50) para o ponteiro pont3
    cout << "valor do ponteiro após atribuição: " << *pont3 << endl;

    // pont3 = pont1; // agora pont3 aponta para o mesmo endereço que pont1
    // isso da vazamento de memória, pois o ponteiro pont3 não aponta mais para o espaço que foi alocado com new, e o 35 foi perdidio

    // ???? como corrigir ????
    
    // use delete para liberar a memória alocada
    // delete pont3; // libera o espaço de memória alocado por new
    // pont3 agora não aponta mais para o espaço alocado
    return 0;
}