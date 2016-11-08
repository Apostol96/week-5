#include <iostream>

using namespace std;

int main()
{
    int n;
    bool isPrime = true;
    cout << "Enter a number to check if it is prime ";
    cin >> n;
    for (int a = 2; a<n && isPrime; a++)
    {
        isPrime = n%a;
    }
    cout << (isPrime ? "Yes" : "No");
}
