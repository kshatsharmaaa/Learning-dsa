/*
    nCr =   n!
        -----------
        r! * (n-r)!
*/



#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r) {
    int ans = (factorial(n))/(factorial(r)*factorial(n-r));
    return ans;
}

int main()
{

    int n,r;
    cout<<"Enter the value of 'n' and 'r': "; //Taking input from
    cin>>n>>r;  //user for values of "n" & "r".
    int anss=nCr(n,r);
    cout << n <<"C" <<r <<" : " <<anss<<endl;

}