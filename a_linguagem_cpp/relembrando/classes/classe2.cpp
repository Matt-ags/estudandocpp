#include <iostream>

using namespace std;

class carro{
    private:
    //variaveis privadas!
    int ano;
    float valor, km;

    public:

    // construtor:
    carro(int a = 0, float v = 0, float k = 0){ // como se fosse a função "__init__" em python
        ano = a;
        valor = v;
        km = k;

    };
    // get -> obter algo
    // set -> indicar, (colocar algo)

    void setano(int a){// poderiamos colocar o mesmo nome
        ano = a;
        // this->ano = ano; // o uso da seta com this, indica qual ano é da classe carro
        
    }

    int getano(){
        return ano;
    }

    void setvalor(int v){
        valor = v;

    }

    int getvalor(){
        return valor;
    }

    void setkm(int k){
        km= k;

    }

    int getkm(){
        return km;
    }

};

int main(){
    carro fusca(1995, 10000, 120000);
    // fusca.setano(1995);

    cout << "Ano: " << fusca.getano() << endl;

    return 0;
}