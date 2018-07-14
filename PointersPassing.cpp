#include <iostream>
using namespace std;


#ifndef STEP
#define STEP 1
#endif /* STEP */

int incr(int j);
int incr(int *j);
int incr_ref(int &j);

int main()
{

    int i = 10;
    cout << "Value of i = "<< i << endl;

    int* p = &i;

    cout << "Value of pointer to i (address) = "<< p << endl;

    // Update i by passing it as a value to a increment function
    i = incr(i); //copies the variable and passes
    cout << "Value of i after regular increment function = "<< i << endl;

    // Update i by passing its pointer to a increment function
    i = incr(p);
    cout << "Value of i after passing pointer = "<< i << endl;
    i = incr(&i);
    cout << "Value of i after passing address of i = "<< i << endl;

    // Update i by passing an alias or reference
    i = incr_ref(i);
    cout << "Value of i after calling increment reference function = "<< i << endl;    
      
  return 0;
}


int incr(int j){
  cout << "Inside regular incr function" << "\n";
  j = STEP + j;
  cout << "Incremented Value inside function is : "<< j << "\n";
  return j;
}

int incr(int *j){
  cout << "Inside pointer based incr function" << "\n";
  *j = *j + STEP;
  cout << "Incremented Value inside pointer based function is : " << *j << "\n";  
  return *j;
}

int incr_ref(int &j){
    cout << "Inside alias based  incr function" << "\n";
    j = j + STEP;
    cout << "Incremented Value inside alias based function is : "<< j <<endl;
    return j;
}




