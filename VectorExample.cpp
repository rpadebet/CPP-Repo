#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> vec ; //vector to store integers
  vec.push_back(10);
  vec.push_back(15);
  vec.push_back(20);
  
  cout <<"Size of Vector: "<< vec.size()  << "\n";

  for (int i = 0; i < vec.size(); ++i) {
    cout << "Vector["<<i<<"] = "<<vec[i]<<endl;
  }

  vector<int> vec2 ; //another vector
  vec2 = vec; //assign old vector to new vector

  if (!vec.empty()) { // check vector is empty
    vec.clear();      // clear the vector
  }

  vec2.push_back(15);

  if(vec == vec2) {  //check for equality of vectors
    vec.push_back(10);
  }
    

  for (int j = 0; j < vec.size(); ++j) {
    cout << "Vector["<<j<<"] = "<<vec[j]<<endl;
  }
  
  
  return 0;
}
