#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "n : ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n-j+16 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}