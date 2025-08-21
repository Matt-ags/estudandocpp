#include <iostream>

using namespace std;

int main(){
    //"arrays/vetores bidimensionais"

    int matriz[2][3]; //linha 0 e 1, e coluna 0, 1, 2

    matriz[0][0] = 1; // atribuindo o valor 1 para a posição [0][0]
    matriz[0][1] = 2; // atribuindo o valor 2 para a posição [0][1]
    matriz[0][2] = 3; // atribuindo o valor 3 para a posição [0][2]

    matriz[1][0] = 4; // atribuindo o valor 4 para a posição [1][0]
    matriz[1][1] = 5; // atribuindo o valor 5 para a posição [1][1]
    matriz[1][2] = 6; // atribuindo o valor 6 para a posição [1][2]

    for (int i=0; i<2; i++){ //primeiro for para coluna
        for (int j=0; j<3; j++){
            cout << matriz[i][j] << " "; // imprime cada elemento da matriz
        }
        cout << endl;
    }
    return 0;
}