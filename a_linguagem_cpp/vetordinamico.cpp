#include <iostream>

int main() {
    int numero_de_elementos; // variável para armazenar o tamanho do vetor

    std::cout << "Digite o tamanho do vetor: "; // solicita ao usuário o tamanho do vetor, aqui é mais mostrar na tela
    std::cin >> numero_de_elementos; // lê o tamanho do vetor a partir da entrada padrão, percebe os ">>"? então, o valor digitado pelo usuário é armazenado na variável numero_de_elementos

    int* vetor = new int[numero_de_elementos]; // aqui é interessante, devemos lembrar que vetores são "ponteiros", e que em C++ podemos alocar memória dinamicamente, ou seja, podemos criar um vetor de tamanho variável, que é o caso aqui, onde o tamanho do vetor é definido pelo usuário. O "new" aloca memória para o vetor de inteiros
    // o vetor é um ponteiro para o primeiro elemento do vetor, e o tamanho do vetor é definido pelo usuário (vetor = "array feioso")

    for (int i = 0; i < numero_de_elementos; i++) {
        vetor[i] = 2*i;
    } // aqui só adicionamos valores pro vetor, vai dobrando para cada elemento

    for (int i = 0; i < numero_de_elementos; i++){
        std::cout << "c[" << i << "] = " << vetor[i] << "\n";
    } // mesma logica em vetores.cpp, vai percorrendo e imprimindo

    return 0; // finaliza o programa com sucesso
    delete[] vetor; // aqui é só uma curiosidade, 
    // quando a gente trabalha com as "coisas dinamicas", é como se eu criasse um espaço na memória, e quando eu não precisar mais desse espaço, eu preciso liberar ele, para que o sistema possa usar esse espaço novamente, então, o "delete[] vetor" libera o espaço alocado para o vetor, é importante para não ter "vazamento de memória", ou seja, não deixar espaço alocado na memória que não está sendo usado
}