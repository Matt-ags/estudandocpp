#include <iostream>

using namespace std;

class propaganda{
    // temos argumentos privados e publicos
    private:
    // acessamos somente dentro da classe
    public:
    // podemos acessar em outras classes, funções (mais livre)

    void escrever(){ // função publica!
        cout << "olá, tudo bem?" << endl;
    }

    void acao(){
        cout << "outra função!" << endl;
    }
 
};

int main(){
    //objetos através de classes
    propaganda acoes; 
    //chamei a classe, e criei o objeto acoes!
    acoes.escrever();
    acoes.acao();
    
    return 0;
}