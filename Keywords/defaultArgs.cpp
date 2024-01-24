#include <iostream>
using namespace std;

void print(int arr[],int n,int start=0){
    for(int i=start; i<n; i++){
        cout  <<arr[i]<<endl;
    }
}



int main()
{

    int aee[5] = {1,4,7,8,9};
    print(aee,5);
    print(aee,5,2);
}
