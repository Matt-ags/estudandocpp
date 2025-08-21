// usuario informa o gasto de akimentação de 5 familias
// calculamos a média

//para cada familia, falamos, essa familia gastou x, acima da média, na média, ou abaixo
#include <iostream>
using namespace std;

int main() {

    int gastos[5];
    int media = 0;

    for (int i=0; i<5; i++){
        cout << "Digite o gasto da familia " << i+1 << ": ";
        cin >> gastos[i]; // atribuindo o valor digitado pelo usuário para cada posição do vetor
    }

    for (int i=0; i<5; i++){
        media += gastos[i]; // somando os gastos de todas as familias
        // cout << media << endl;
    }

    media = media / 5;

    cout << " - - - - - - - - - - - - " << endl;

    cout << ">>> A média de gastos é: " << media << " <<<" << endl;

    for (int i=0; i<5; i++){
        cout << "A família " << i+1 << " Gastou " << gastos[i] << endl;
        if (gastos[i] > media){
            cout << "- ( > ) Acima da média" << endl;
        }
        else if (gastos[i] == media){
            cout << "- ( = ) Dentro da média" << endl;
        }
        else{
            cout << "- ( < ) Abaixo da média" << endl;
        }
    }

    return 0;
}