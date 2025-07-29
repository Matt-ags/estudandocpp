// arquivo da definição da classe

/*
  As primeiras linhas de código deste arquivo servem para evitar que
  múltiplas definições da classe Time ocorram. Isso poderia ocorrer se
  você der include de dois pacotes que dão include em "time.h"
*/

#ifndef TIME_H   // Inclua esse bloco apenas se TIME_H não está definido
#define TIME_H   // Na primeira inclusão, defina TIME_H para que este
		 // bloco não seja incluído mais de uma vez.


     // em poucas palavras, é tipo, "se vc não achou a classe, defina aqui:, senão, pule

class Time {
 private:  // Seção Privada
  // Membros privados (não quero que alguem de fora acessa os atributos)
  int hour;     // 0 - 23
  int minute;   // 0 - 59
  int second;   // 0 - 59
 public:   // Seção Pública
  Time(int hour = 0, int minute = 0, int second = 0); // adicionamos valores default        
  int getHour() const;   
  void setHour(int hour);   
  int getMinute() const; 
  void setMinute(int minute); 
  int getSecond() const; 
  void setSecond(int second);
  void print() const;
  void nextSecond();  
  // acima "declaramos" os métodos, ou seja, dizemos que eles existem
  // mas não implementamos eles aqui, isso é feito no arquivo time.cpp
};  

#endif  // Final do bloco "#ifndef"









