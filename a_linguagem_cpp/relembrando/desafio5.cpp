#include <iostream>

using namespace std;

int main() {

    cout << "MORADIA POPULAR" << endl;
    cout << " - - - - - - - - - - - - - - - -" << endl;

    const float renda = 1200.00;
    const int idade = 21;

    cout << "Informe sua idade: ";
    int idadeUsuario;
    cin >> idadeUsuario;
    cout << "Informe sua renda mensal: ";
    float rendaUsuario;
    cin >> rendaUsuario;

    if (idadeUsuario >= idade && rendaUsuario <= renda) {
        cout << "Você está apto a receber o benefício de moradia popular." << endl;
    } else {
        cout << "Você não atende aos critérios para o benefício de moradia popular." << endl;
        if (idadeUsuario < idade) {
            cout << "Motivo: Idade abaixo do requisito mínimo." << endl;
        }
        if (rendaUsuario > renda) {
            cout << "Motivo: Renda mensal acima do limite permitido." << endl;
        }
    }

    return 0;
}