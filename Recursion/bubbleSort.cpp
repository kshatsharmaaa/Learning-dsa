#include <iostream>
using namespace std;

void sortArray(int *arr,/*same as arr[]*/ int n){
    //base case - already sorted
    if(n==1 || n==0)
        return;

    //round 1 m ek element place krdo baki recursion dekhlega
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);//largest ko end me pohchadega
    }
    //recursive call
    sortArray(arr,n-1);
}

int main()
{

    int arr[5] = {2,5,1,6,9};

    sortArray(arr,5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}