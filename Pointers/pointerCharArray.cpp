#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl; ///gives address
    cout << ch << endl;// gives value

    char *c= &ch[0];
    cout<< c << endl;

    char d = 'z';
    char *p =&d;
    cout << p<< endl;
}