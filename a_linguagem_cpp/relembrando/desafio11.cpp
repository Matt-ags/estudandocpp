#include <iostream>
using namespace std;
//cidades brasil:
// nome
// capital
// população
// ano fundação

// Classe:
class CidadesBrasil{
    private:
    string nome, capital;
    int populacao, anofundacao;

    public:
    CidadesBrasil(string n, string c, int p, int a);

    string getnome();
    string getcapital();
    int getpopulacao();
    int getfundacao();

};

// Função Principal:
int main(){
    CidadesBrasil SaoPaulo("São Paulo", "São Paulo", 11500000, 1554);

    cout << "Nome: " << SaoPaulo.getnome() << endl;
    cout << "Capital: " << SaoPaulo.getcapital() << endl;
    cout << "População: " << SaoPaulo.getpopulacao() << endl;
    cout << "Ano de Fundação: " << SaoPaulo.getfundacao() << endl; 

    return 0;
}

// Definindo funcionalidades:

CidadesBrasil::CidadesBrasil(string n = "indefinida", string c = "indefinida", int p = 0, int a = 0){
    nome = n;
    capital = c;
    populacao = p;
    anofundacao = a;
}

string CidadesBrasil::getnome(){
    return nome;
}

string CidadesBrasil::getcapital(){
    return capital;
}

int CidadesBrasil::getpopulacao(){
    return populacao;
}

int CidadesBrasil::getfundacao(){
    return anofundacao;
}

