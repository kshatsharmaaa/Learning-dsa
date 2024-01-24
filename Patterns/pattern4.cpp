#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;


    int i =1;
    while(i<=n){
        int j=1;
    // int value=i;
        while(j<=i){
            cout<<i+j-1<<" ";
            // value++;
            j++;       
            }

            cout<<endl;
            i++;
    }
}