#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "Enter the value of a and b :";

    cin >> a >> b;

    char op;
    cout << "Enter operator + - * / :";
    cin>> op;

    switch(op) {
        case '+' : cout <<"a+b :" <<a+b;
            break;
        case '-' : cout <<"a-b :" <<a-b;
            break;
        case '*' : cout <<"a*b :" <<a*b;
            break;
        case '/' : cout <<"a/b :" <<a/b;
            break;
    }
    return 0;
}