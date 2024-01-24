#include <iostream>
using namespace std;

bool bsearch(int arr[],int s,int e,int key) {

    //base case
    if(s>e)
        return false;

    int mid = s + (e-s)/2;

    if(key == arr[mid])
        return true;
    if(key > arr[mid])
        return bsearch(arr,mid+1,e,key);
    else
        return bsearch(arr,s,mid-1,key);

}

int main()
{

    int arr[6] = {2,4,6,10,14,16};
    int size = 6;
    int s = 0;
    int e = size - 1;
    int key = 16;
    bool ans = bsearch(arr,s,e,key);

    if(ans)
        cout <<"key is present "<<endl;
    else    
        cout <<"key is absent "<<endl;
}