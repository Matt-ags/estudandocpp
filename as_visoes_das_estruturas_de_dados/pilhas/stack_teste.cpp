#include "stack.h"
#include <iostream>

using namespace std;

int main() {
  ItemType character;
  Stack stack;
  ItemType stackItem;
  
  cout << "Adicione uma String." << endl;     
  cin.get(character);
  while (character != '\n') // se não for uma quebra de inha, adicionamos na pilha(enter)
    {
      stack.push(character);
      cin.get(character);
    }
  
  while (!stack.isEmpty()) // "imprimimos de tras pra frente"
    {
      stackItem = stack.pop();
      cout << stackItem;
    }
  
  cout << endl;
}
