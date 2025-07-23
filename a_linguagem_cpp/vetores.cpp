#include <iostream>

int main() {
    int c[10] = {12, 1, 43}; // iniciamos um vetor, e os primeirs 3 elementos são inicializados com os valores 12, 1 e 43, os demais serão 0

    c[5] = 10; // contudo, podemos atribuir por fora, chamando o elemento e o valor desejado

    c[7] = 7;

    for (int i = 0; i < 10; i++) { // para cada, iniciando de i = 0, até i < 10, incrementando de 1 em 1, fazemos:
        std::cout << "c[" << i << "] = " << c[i] << "\n"; // mostrar o valor do elemento i do vetor c, com o valor que ele tem, e pulando uma linha, apos isso, voltamos pro for
    }
    return 0; // cabou
}