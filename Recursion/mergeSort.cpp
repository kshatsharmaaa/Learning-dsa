#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s+e) / 2;
    int n = mid - s + 1;
    int m = e - mid;

    //creating 2 arrays 
    int *a = new int[n];
    int *b = new int[m];

    // copy values
    int k = s;
    for (int index = 0; index < n; index++)
    {
        a[index] = arr[k++];
    }

    k = mid + 1;
    for (int index = 0; index < m; index++)
    {
        b[index] = arr[k++];
    }

    // merge 2 sorted array
    int i = 0;
    int j = 0;
    k = s;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }

    while (i < n)
    {
        arr[k++] = a[i++];
    }

    while (i < m)
    {
        arr[k++] = b[j++];
    }

    //dynamic

    delete []a;
    delete []b;
}

void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s >= e){
        return;
    }
    int mid = (s+e) / 2;
    mergeSort(arr, s, mid);     // left part
    mergeSort(arr, mid + 1, e); // right part
    merge(arr, s, e);
}

int main()
{

    int arr[5] = {2, 5, 1, 6, 9};
    int nn = 5;

    mergeSort(arr, 0, nn - 1);

    for (int i = 0; i < nn; i++)
    {
        cout << arr[i] << " ";
    }
    
}