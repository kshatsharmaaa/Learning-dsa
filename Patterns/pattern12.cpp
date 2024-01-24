#include <iostream>
using namespace std;

int main()
{

    int n;
    cout<<"N : ";
    cin>>n;

    int i =1;
int value = 1;
    while(i<=n){
    int space = n - i;
        while(space){
            cout<<"  ";
            space--;
        }
        int j =1;
        while(j<=i){
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;

    }
}