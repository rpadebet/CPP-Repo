#include <iostream>
#include <vector>
#include <cstdlib>
#include <stdexcept>
#include <string>

using namespace std;

template<class T>
class Stack
{
private:
  vector<T> elems;  //elements
  
public:
  void push(T const&); //push elements
  void pop();          //pop elements
  T top() const;       //return top elements
  bool empty() const { //return true is empty
    return elems.empty();
  }
};

template<class T>
void Stack<T>::push(T const& elem)
{
  //append a copy of the passed element
  elems.push_back(elem);
    }

template<class T>
void Stack<T>::pop() {
  if(elems.empty()) {
    throw out_of_range("Stack::pop():empty stack");
  }
  //remove last element
  elems.pop_back();
}

template<class T>
T Stack<T>::top() const {
  if(elems.empty()) {
    throw out_of_range("Stack::pop():empty stack");
  }
  // return top element - return copy of last element
  return elems.back();
}


int main() {
  try {
    
  Stack<int> intStack;
  Stack<string> stringStack;

  //manipulate integer stack
  intStack.push(5);
  cout <<"Element in int Stack is: "<< intStack.top() << "\n";
  
  //manipulate string stack
  stringStack.push("Hello World");
  cout << "Element in string stack is : "<<stringStack.top()<<endl;

  stringStack.pop();
  stringStack.pop();
    
  }

  catch (exception const& ex) {
    cerr << "Exception: "<<ex.what()<<endl;
    return -1;

  }

}

int newfunc(){
}
