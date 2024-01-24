#include <iostream>
using namespace std;

int main()
{

    int *p2;

    cout << *p2 << endl; // value
    cout << p2 << endl; // address
   

   
    int i =5;
    int *p = 0;
    p = &i;

    cout << *p << endl; // value
    cout << p << endl; // address

    

   int num = 5;
   int a =num;
   a++;
   cout << num << endl;


   int *p3 = &num;
   (*p3)++;
   cout <<"after "<< num << endl;

//copying
   int *q = p3;
   cout<<*p3<<endl;
   cout<<*q<<endl;

   //imp
   int i2 = 3;
   int *t = &i2;

   *t = *t + 1;
   cout<< *t<<endl;
   cout<<"before t "<<t<<endl;
   t=t+1;
   cout<<"before t "<<t<<endl;




}