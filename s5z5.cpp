#include <iostream>

using namespace std;

int main()
{
    int p,q;
    bool isPrime;
    cout << "Enter two numbers, second one must be greater than the first ";
    cin >> p >> q;
    if (p>q)
        cout << "You did not enter correct numbers";
    else
    {
        for (p; p<=q; p++)
        {
            isPrime=true;
            for (int a=2; a<p && isPrime; a++)
            {
                isPrime = p%a;
            }
            if (isPrime)
                cout << p << " ";
        }
    }
}
