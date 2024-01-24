#include <iostream>
using namespace std;

int main()
{

    int n;
    cout<<"type n : ";
    cin>>n;

    int i =1;
    int abc=1;

    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<abc<<" ";
            abc++;
            j++;
        }
        cout<<endl;
        i++;
    }
}