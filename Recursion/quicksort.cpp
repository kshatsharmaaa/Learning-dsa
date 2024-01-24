#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    //let pivot element
    int pivot = arr[s];

    //count element less than pivot for right place
    int cnt =0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot)
            cnt++;
    }

    int pivotIndex = s + cnt;
    swap(arr[pivotIndex],arr[s]);

    //yha tak pivot element apni jagah pohoch gya hoga ab left and right part ki baaari
    int i = s, j = e; 

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
            swap(arr[i++],arr[j--]);

    }

    return pivotIndex;
}

void quicksort(int arr[], int s, int e){
    //base case
    if(s>=e) //o element ya 1 element
        return;

    //partition
    int p = partition(arr,s,e);

    //recursive call
    quicksort(arr, s, p-1);//left part
    quicksort(arr, p+1, e);//right part
}

int main()
{
    int arr[5] = {2,4,1,6,9};
    int n = 5;

    quicksort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}