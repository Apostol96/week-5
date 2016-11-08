#include <iostream>

using namespace std;

int main()
{
    int n, mir=0, dig, bin=0; // mir - огледално, dig - остатък при делене
    cin >> n;
    while (n>0)
    {
        dig = n%2;
        mir = mir*10 + dig;
        n /= 2;
    }
    while (mir>0)
    {
        dig = mir%10;
        bin = bin*10 + dig;
        mir /= 10;
    }
    cout << bin;
}
