#include <iostream>
using namespace std;

int main()
{

    int arr[10]={2,5,8,67};
    /*
    cout << "addresss of first memory block is "<< arr <<endl;
    cout << "addresss of first memory block is "<< &arr[0] <<endl;
    cout << "0th  location"<<*arr<<endl;
    cout << "+1"<<*arr+1<<endl;
    cout << "1st location "<<*(arr+1)<<endl;

    int i =3;
    cout << i[arr] <<endl;
    */


   /*
    int temp[10];
    cout << sizeof(temp)<<endl;

    int *p = &temp[0];
    cout << sizeof(p) << endl; //address
    cout << sizeof(*p)<< endl; //value
    */

    int a[20] = {1,2,3,4};
    //address printing
    cout <<&a[0]<< endl;
    cout <<&a<< endl;
    cout <<a<< endl;//arr name

    int *p = &a[0];//wayto initialize pointer
    cout <<p <<endl;//isse array ka address
    cout <<*p <<endl;//* se to value aati h
    cout <<&p <<endl;//isse address pointer ka adresss




}