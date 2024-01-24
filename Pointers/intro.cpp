#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    cout << num << endl;

    //address of operator - &

    cout << "address of num is "<< &num<<endl;

    int *ptr =&num;
    cout <<"value is "<<*ptr<<endl;
    cout<<"address is "<<ptr<<endl;

    double d = 4.2;
    double *p2 = &d;
    cout<<endl;
    cout <<"value is "<<*p2<<endl;
    cout<<"address is "<<p2<<endl;

    cout<<endl;
    cout <<"size of integer is "<<sizeof(num)<<endl;
    cout <<"size of pointer is "<<sizeof(ptr)<<endl;
    
}