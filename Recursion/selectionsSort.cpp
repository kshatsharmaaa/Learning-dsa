#include <iostream>
using namespace std;

void sortArray(int arr[], int n){
    //base case - already sorted
    if(n==1 || n==0)
        return;


    for(int i=0; i<n-1; i++){
        int min = i;
        if(arr[i+1]<arr[min])
            min = i+1;
        swap(arr[i],arr[min]);
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