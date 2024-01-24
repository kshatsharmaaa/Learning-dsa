#include <iostream>
using namespace std;

int main()
{

    int n;
    cout<<"N : ";
    cin>>n;

    int i =1;
    
    while(i<=n){
        //space

        int space = n - i;
        while(space){
            cout<<"  ";
            space--;
        }
        // first triangle

        int j =1;
        while(j<=i){
            cout<<j<<" ";
            
            j++;
        }
        // second triangle
        int start=i-1;
        while(start){
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
        i++;

    }
}