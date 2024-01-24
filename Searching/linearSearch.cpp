#include <iostream>
using namespace std;

bool search(int arr[],int n, int k) {
    for(int i =0;i<n;i++) {
        if(arr[i]==k){
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[10]= {5,7,2,-6,0,8,4,11,9,50};

    cout << "Enter the key : ";
    int k;
    cin>>k;

    bool found = search(arr,10,k);  

    if(found){
        cout<<"Key Found";
    }
    else{
        cout<<"Not Found";
    }
}