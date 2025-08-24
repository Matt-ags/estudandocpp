// perguntar ao usuario o tamanho do vetor
// depois vai perguntando dos elementos
// ao final, pergunta se ele quer imprimir outro (use o delete apos a impressão)

#include <iostream>
using namespace std;

char d = 'S';

char decisao(char &d){
        char de;

        cout << endl;
        cout << "Deseja imprimir outro vetor? (S/N)" << endl;
        cin >> de;
        
        if(de == 'S'){
            d = 'S';

        } else if(de == 'N'){
            d = 'N';

        }else{
            cout << "Digite corretamente a resposta! " << endl;
            decisao(d);
        }

        return d;

    };

void criar_vetor() {
    
    int tam;
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;

    int* vetor = new int[tam]; 

    for (int i=0; i<tam; i++) {
        cout << "Digite o elemento " << i+1 << " do vetor: ";
        cin >> vetor[i]; // atribuindo o valor digitado pelo usuário para cada posição do vetor
    }

    for (int i=0; i<tam; i++) {
        cout << "Elemento " << i+1 << ": " << vetor[i] << endl; // imprimindo cada elemento do vetor
    }
    delete[] vetor;
    
    decisao(d);
}


int main(){
    do {
        criar_vetor();
    } while (d == 'S');
    return 0;
}

// rapaiz né que fico bunitin isso