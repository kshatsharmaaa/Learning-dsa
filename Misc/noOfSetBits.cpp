#include <iostream>
using namespace std;

int countBits(int n) {
    int count = 0;
    while (n> 0){
        count =count+(n&1);
        n=n>>1;        
    }
    return count;
}

int main()
{

    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int ans = countBits(a)+countBits(b);
    cout << ans << endl;

}