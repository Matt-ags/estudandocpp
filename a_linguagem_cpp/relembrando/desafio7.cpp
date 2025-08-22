#include <iostream>

using namespace std;

int main(){
    // usuario digita a quantidade de linhas e colunas das matrizes
    // digitamos o valor da primeira matriz (todos os elementos)
    // realizamos a soma das duas matrizes

    int linha;
    int coluna;

    cout << "Digite a quantidade de linhas das matrizes: " << endl;
    cin >> linha;
    cout << "Agora, a quantidade de colunas: " << endl;
    cin >> coluna;

    int matriz1[linha][coluna];
    int matriz2[linha][coluna];
    int matriz_soma[linha][coluna];

    for (int i=0; i<linha; i++){ 
        for (int j=0; j<coluna; j++){
            cout << "Digite o elemento da coluna " << j+1 << " da linha " << i+1 << " da primeira matriz" << endl; 
            cin >> matriz1[i][j]; 
        }
        cout << endl;
    }

    for (int i=0; i<linha; i++){ 
        for (int j=0; j<coluna; j++){
            cout << "Digite o elemento da coluna " << j+1 << " da linha " << i+1 << " da segunda matriz" << endl; 
            cin >> matriz2[i][j]; 
        }
        cout << endl;
    }

    cout << "- - - - - - - - - - -" << endl;
    cout << "RESULTADO DAS MATRIZES" << endl;
    cout << "- - - - - - - - - - -" << endl;

    cout << "MATRIZ 1) " << endl;

    for (int i=0; i<linha; i++){ //primeiro for para coluna
        for (int j=0; j<coluna; j++){
            cout << "[" << matriz1[i][j] << "] "; // imprime cada elemento da matriz
        }
        cout << endl;
    }

    cout << "MATRIZ 2) " << endl;

    for (int i=0; i<linha; i++){ //primeiro for para coluna
        for (int j=0; j<coluna; j++){
            cout << "[" << matriz2[i][j] << "] "; // imprime cada elemento da matriz
        }
        cout << endl;
    }
    
    for (int i=0; i<linha; i++){ //primeiro for para coluna
        for (int j=0; j<coluna; j++){
            int soma = matriz1[i][j] + matriz2[i][j];
            matriz_soma[i][j] = soma;
        }
        cout << endl;
    }

    cout << "RESULTADO DA SOMA) " << endl;

    for (int i=0; i<linha; i++){ //primeiro for para coluna
        for (int j=0; j<coluna; j++){
            cout << "[" << matriz_soma[i][j] << "] "; // imprime cada elemento da matriz
        }
        cout << endl;
    }

    //certamente dava pra resumir usando uma funçÃo para essa "fORMA DE EXIBIR", e usar ponteiros

    return 0;
}