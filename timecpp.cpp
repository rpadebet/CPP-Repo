#include <iostream>
#include <ctime>


using namespace std;

int main () {
  // current date and time based on current system
  time_t now = time(0);

  cout << "number of seconds since 1 Jan 1900 : " << now <<endl;

  tm *ltm = localtime(&now);

  //print various elements of the tm structure
  cout << "The year is : " << 1900 + ltm->tm_year <<endl; // tm_year years since 1900
  cout << "The month is : " << 1 + ltm->tm_mon <<endl; //tm_mon months since january 0-11
  cout << "The day is : " << ltm->tm_mday <<endl;
  cout << "The weekday is : " << ltm->tm_wday <<endl;
  cout << "The time is : " << ltm->tm_hour<<" : "<<ltm->tm_min<<" : "<<ltm->tm_sec <<endl;
  cout << "The tm_gmtoff is : " << ltm->tm_gmtoff <<endl;

  return 0;
}
