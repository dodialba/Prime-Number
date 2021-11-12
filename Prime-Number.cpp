#include <iostream>
using namespace std;
int main()
{
    cout << "Enter any number " << endl;
    int number, ctr = 0;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            ctr = ctr + 1;
        }
    }
    if (ctr ==2)
    {
        cout << "The number is prime" << endl;
    }
    else
    {
        cout << "The number is not prime" << endl;
    }
}