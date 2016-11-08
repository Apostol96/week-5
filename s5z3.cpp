#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number between 0 and 10 ";
    cin >> n;
    if (n<0 || n>10)
        cout << "Enter a proper number";
    else
    {
        while (n<=100)
        {
            if(n%6==0)
                cout << n << " ";
            n++;
        }
    }

}
