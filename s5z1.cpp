#include <iostream>

using namespace std;

int main()
{
    int n, sum=0;
    cout << "How many numbers do you want to add up? ";
    cin >> n;
    while (n>=0)
    {
        sum += n;
        n--;
    }
    cout << sum;
}
