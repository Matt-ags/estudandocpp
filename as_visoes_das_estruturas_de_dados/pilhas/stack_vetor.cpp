#include "stack.h"
#include <iostream>
using namespace std;

// criando a "estrutura, delcarando, fazendo a alocação"
Stack::Stack()
{
  length = 0;
  structure = new ItemType[MAX_ITEMS];
}

Stack::~Stack()
{
  delete [] structure;
}
// se esta cheio ou vazio
bool  Stack::isEmpty() const
{
  return (length == 0);
}

bool Stack::isFull() const
{
  return (length == MAX_ITEMS);
}
// coloco elemento
void Stack::push(ItemType item)
{
  if (!isFull()){
    structure[length] = item;
    length++;
  } else {
    throw "Stack is already full!";
  }
}
// tiramos o elemento
ItemType Stack::pop()
{
  if (!isEmpty()){
    ItemType aux = structure[length - 1];
    length--;
    return aux;
  } else {
    throw "Stack is empty!";
  }
}

// imprimimos
void Stack::print() const
{
  cout << "Pilha = ";
  for (int i = 0; i < length; i++) {
    cout << structure[i];
  }
  cout << endl;
}
