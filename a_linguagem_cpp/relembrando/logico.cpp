#include <iostream>

using namespace std;

/*vamos realizar um algoritmo que calcula a media e diz se foi aprovado ou não*/
int main() {

    float nota1, nota2;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    float media = (nota1 + nota2) / 2;

    /*
    if (media >= 5){
        cout << "aluno aprovado com media: " << media << endl;
    } else{ // caso tivessemos varias faixas, usamos o else if
        cout << "aluno reprovado com media: " << media << endl;
    }
    */

    /*
    operadores logicos:
    e -> &&
    ou -> ||
    negação -> !
    */

    float frequencia;
    cout << "Digite a frequencia do aluno: ";
    cin >> frequencia;
    if (media >= 5 && frequencia >= 75) {
        cout << "Aluno aprovado com media: " << media << " e frequencia: " << frequencia << "%" << endl;
    } else{
        cout << "Aluno reprovado com media: " << media << " e frequencia: " << frequencia << "%" << endl;
    }

    // existe tambem o operador ternario, que é uma forma de simplificar o if-else
    // (media >= 5 && frequencia >= 75) ? cout << "Aluno aprovado com media: " << media << " e frequencia: " << frequencia << "%" << endl : cout << "Aluno reprovado com media: " << media << " e frequencia: " << frequencia << "%" << endl;
    // explicação
    // (condição) ? valor_se_verdadeiro : valor_se_falso;
    // ? -> "é verdadeira?"
    // : -> "caso não, faça isso"

    return 0;
}