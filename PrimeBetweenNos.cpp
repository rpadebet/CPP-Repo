#include <iostream>
using namespace std;

int checkPrimeNumber(int);

int main()
{
    int n1, n2;
    bool flag;

    cout << "Enter two positive integers: ";
    cin >> n1 >> n2;

    cout << "Prime numbers between " << n1 << " and " << n2 << " are: ";

    for(int i = n1+1; i < n2; i++)
    {
        // If i is a prime number, flag will be equal to 1
        flag = checkPrimeNumber(i);

        if(flag)
            cout << i << " ";
    }
    cout<<"\n";
      
    return 0;
}

// user-defined function to check prime number
int checkPrimeNumber(int n)
{
    bool flag = true;

    for(int j = 2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
