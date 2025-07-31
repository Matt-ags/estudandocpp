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

    if (media >= 5){
        cout << "aluno aprovado com media: " << media << endl;
    } else{ // caso tivessemos varias faixas, usamos o else if
        cout << "aluno reprovado com media: " << media << endl;
    }
    
    return 0;
}