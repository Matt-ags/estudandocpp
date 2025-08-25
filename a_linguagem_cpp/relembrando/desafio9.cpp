// usando ponteiros (apenas)
// usuario informa idade de duas pessoas
// algoritmo calcula a média

#include <iostream>
using namespace std;

int media(int idade1, int idade2){
    float *media = new float;
    *media = (idade1 + idade2) / 2;
    cout << "A média das idades é: " << *media << endl;
    delete media;
    return *media;
}
int main(){
    int *idade1 = new int;
    int *idade2 = new int;

    cout << "Digíte a idade da primeira pessoa: " << endl;
    cin >> *idade1;
    cout << "Digíte a idade da segunda pessoa: " << endl;
    cin >> *idade2;
    media(*idade1, *idade2);
    delete idade1;
    delete idade2;
    // cout << *media << endl;
}