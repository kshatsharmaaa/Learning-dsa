#include <iostream>
using namespace std;
void printa(int a[],int n) {
    for(int i =0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl; 
}
void alter(int a[],int n) {
    for(int i =0;i<n;i+=2) {
        if(i+1<n) {
            swap(a[i],a[i+1]);
        }
    }
}
int main()
{

    int a[6] = {1,2,3,4,5,6};

    alter(a,6);
    printa(a,6);
}