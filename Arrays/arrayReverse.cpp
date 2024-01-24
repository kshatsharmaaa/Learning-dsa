#include <iostream>
using namespace std;

void printarray(int arr[],int n) {

    for(int i =0;i<n;i++) {
        cout<<arr[i] << " " ;
    }
    cout<<endl;
}

void reverse(int arr[],int n) {
    int s =0;
    int e =n-1;
    while (s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
}

int main()
{

    int eve[6] = {9, 8, 7, 6, 5, 4};
    int odd[5]= {1, 2, 3, 4, 5};

    reverse(eve,6);
    printarray(eve,6);

    reverse(odd,5);
    printarray(odd,5);
}