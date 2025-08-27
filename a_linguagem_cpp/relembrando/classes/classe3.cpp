#include <iostream>
using namespace std;

class carro{
    private:
    int ano;
    float valor, km;

    public:
    // tipo saida, nome, argumentos (o que ela faz não coloque)
    // construtor:
    carro(int a, float v, float k);
    // get -> obter algo
    // set -> indicar, (colocar algo)

    void setano(int a);

    int getano();

    void setvalor(int v);

    int getvalor();

    void setkm(int k);

    int getkm();

};

// mas ai, onde coloco o que ela faz??

int main(){
    carro fusca(1995, 10000, 120000);
    cout << "Ano: " << fusca.getano() << endl;

    return 0;
}

// colocamos depois do main
// adicionamos o "::"
    carro::carro(int a = 0, float v = 0, float k = 0){ // como se fosse a função "__init__" em python
        ano = a;
        valor = v;
        km = k;

    };
    // get -> obter algo
    // set -> indicar, (colocar algo)

    void carro::setano(int a){// poderiamos colocar o mesmo nome
        ano = a;
        // this->ano = ano; // o uso da seta com this, indica qual ano é da classe carro
        
    }

    int carro::getano(){
        return ano;
    }

    void carro::setvalor(int v){
        valor = v;

    }

    int carro::getvalor(){
        return valor;
    }

    void carro::setkm(int k){
        km= k;

    }

    int carro::getkm(){
        return km;
    }

    //dessa forma é mais organizado