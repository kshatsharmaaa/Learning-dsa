#include <iostream>
using namespace std;

bool search(int arr[],int size,int key) {

    //base case
    if(size == 0)//akhri wala traverse krne k baad
        return false;

    if(arr[0] == key)
        return true;
    else{
        bool ans = search(arr+1,size-1,key);
        return ans;
    }
}

int main()
{

    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 9;
    bool ans = search(arr,size,key);

    if(ans)
        cout <<"key is present "<<endl;
    else    
        cout <<"key is absent "<<endl;
}