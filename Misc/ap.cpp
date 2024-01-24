#include <iostream>
using namespace std;

int ap(int n ) {
    int ans = 3*(n)+7;
    return (ans); 
}

int main()
{

    int n;
    cin >> n;
    int ans =ap(n);
    cout << "The value of 3n+7 for n = "<<n<<" is "<<ans;

}