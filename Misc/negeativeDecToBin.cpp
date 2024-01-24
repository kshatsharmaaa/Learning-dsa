#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number in decimal : ";
    cin >> n;
    int m = abs(n);
    int answer = 0;
    int binary[100] = {0};
    for (int i = 0; m > 0; i++)
    {
        binary[i] = m % 2;
        m /= 2;
        answer++;
    }
    cout << endl;
    cout << "Number in binary : ";
    for (int j = answer - 1; j >= 0; j--)
    {   
        cout << binary[j];
    }
}