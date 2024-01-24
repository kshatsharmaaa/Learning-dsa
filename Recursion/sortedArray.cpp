#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    //base
    if (size == 1 || size == 0)
        return true;
    
    // rr
    if (arr[0] > arr[1])
        return false;
    else{
        bool remaining = isSorted(arr+1,size-1);
        return remaining;
    }
}

int main()
{

    int arr[5]={2,4,9,8,9};
    int size = 5;

    bool ans = isSorted(arr,size);

    if(ans)
        cout << "Array is sorted "<<endl;
    else
        cout << "Array is not sorted "<<endl;

}