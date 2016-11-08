#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int product=1;
    cin >> a >> b;
    while (a<=b)
    {
        product *= a;
        a++;
    }
    cout << product;
}
