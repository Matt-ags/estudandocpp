#include <iostream>

using namespace std;

int main() {
    // vetores: LISTA DE ELEMENTOS DO MESMO TIPO (antes de começar, devemos declarar o tipo deste vetor)


    // alocação estatica:
    cout << "VETOR ESTATICO" << endl;
    cout << "----------------" << endl;


    //int vet[4]; // vetor de inteiros com 4 posições, começamos a partir do "0,1,2,3"

    //vet[0] = 10; // atribuindo o valor 10 para a posição 0 do vetor
    //vet[1] = 20; // atribuindo o valor 20 para a posição 1 do vetor
    //vet[2] = 30; // atribuindo o valor 30 para a posição 2 do vetor
    //vet[3] = 40; // atribuindo o valor 40 para a posição 3 do vetor

    // posso tambem ja declarar e coloocar os elementos:
    int vet[4] = {10,20,30}; // o ultimo elemento (vet[3]) vai ser 0, pois não foi atribuido nenhum valor

    // poderiamos já declarar o vetor e elementos, sem o tamanho -> "vet[] = {1,2}"

    // para imprimir o vetor, usamos for

    for (int i=0 ; i<4 ; i++) {
        cout << vet[i] << endl; // imprime cada elemento do vetor
    }
    //cout << vet[3] << endl;

    int x = sizeof(vet);
    int tamanho = sizeof(vet)/sizeof(int); // tamanho do vetor, dividindo o tamanho total pelo tamanho do tipo
    cout << "Tamanho do vetor em bytes: " << x << endl; // o int tem o tamanho de 4 bytes, logo, o vetor tem 16 bytes (4*4)

    cout << "Quantidade de elementos: " << tamanho << endl;

    // alocação dinamica:
    // ao estiver processando, dependendo do que acontece, vai colocando elementos "tamanho dinamico!"

    cout << endl;
    cout << "VETOR DINAMICO" << endl;
    cout << "----------------" << endl;
    cout << endl;

    int tam;
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;

    // vamos trabalhar usando ponteiros
    int* vetor = new int[tam]; // alocando dinamicamente um vetor de inteiros com o tamanho especificado pelo usuário
    // usamos este "new int" para que futuramente liberarmos esta memória usada

    for (int i=0; i<tam; i++) {
        cout << "Digite o elemento " << i+1 << " do vetor: ";
        cin >> vetor[i]; // atribuindo o valor digitado pelo usuário para cada posição do vetor
    }

    for (int i=0; i<tam; i++) {
        cout << "Elemento " << i+1 << ": " << vetor[i] << endl; // imprimindo cada elemento do vetor
    }
    delete[] vetor; // liberando a memória alocada para o vetor
    return 0;
}