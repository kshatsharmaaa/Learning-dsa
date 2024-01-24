#include <iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;//value
}
void update(int *p){
    // p=p+1;
    *p= *p+1;
}
int getSum(int zarr[],int n){
    cout << "size : "<< sizeof(arr)<< endl;
}

int main()
{

    int value = 5;
    int *p =&value;
    // cout << p<<endl;
    // update(p);//address update ni hota pointer ka
    // cout << p <<endl;
    // cout << *p<<endl;
    // update(p);//value update hojatie
    // cout << *p <<endl;
    // print(p);

    int arr[5]={1,2,3,4,5};
    cout << "Sum is "<< getSum(arr,3)<<endl;
}