/*
desafio:
usuario informa 3 notas, e a média da sala.
algoritmo calcula a media do aluno, e informa se esta abaixo, igual ou acima da média
*/

#include <iostream>

using namespace std;

int calculamedia(float nota1, float nota2, float nota3) {
    float media = (nota1 + nota2 + nota3) / 3;
    return media;
}

int main() {
    float nota1, nota2, nota3, mediaSala;

    cout << "Calculadora de Média do Aluno" << endl;
    cout << "Informe as notas do aluno e a média da sala." << endl;
    cout << "----------------------------------" << endl;

    cout << "Informe a primeira nota: ";
    cin >> nota1;
    cout << "Informe a segunda nota: ";
    cin >> nota2;
    cout << "Informe a terceira nota: ";
    cin >> nota3;
    cout << "Informe a média da sala: ";
    cin >> mediaSala;

    float mediaAluno = calculamedia(nota1, nota2, nota3);

    cout << "Média do aluno: " << mediaAluno << endl;
    cout << "Média da sala: " << mediaSala << endl;

    if (mediaAluno < mediaSala) {
        cout << "Aluno abaixo da média." << endl;
    } else if (mediaAluno == mediaSala) {
        cout << "Aluno na média." << endl;
    } else {
        cout << "Aluno acima da média." << endl;
    }

    return 0;
}

