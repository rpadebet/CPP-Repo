#include <iostream>
#include <map>
#include <iterator>
#include <string.h>

using namespace std;

int main()
{
  std::map<string, char> mapOfWords;  //initializes map

  mapOfWords.insert(std::make_pair("John",'1')); //inserting using insert() function
  mapOfWords.insert(std::make_pair("Earth",'1'));
  mapOfWords["Sun"] = '3';                         //insert elements directly

  mapOfWords["John"] = '2';                        //changes values already inserted

  //iterate through elements
  map<string, char>::iterator it = mapOfWords.begin(); //assign iterator to beginning

  while (it != mapOfWords.end()) {
    cout<<"| Key :"<<it->first<<"|\t| Value :"<<it->second << endl;
    it++;      
  }

  //find value associated with Sun

  it = mapOfWords.find("Sun");  //find returns an iterator or end if it can't find
    if(it!= mapOfWords.end()){
      cout<<"Value associated with Sun : "<<it->first<<"::"<<it->second <<endl;
    }
  

  
}
