#include <iostream>
using namespace std;

int fibonacci(int n) {
    int a =0;
    int b =1;
     for (int i = 2; i < n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    } 
      return b;
}


int main()
{

    int n;
    cout << "Enter the number of elements in fibonacci series: ";
    cin >> n;

    int nth = fibonacci(n);
    cout << n<<"th element of the fibonacci series is "<<nth<<endl;

}