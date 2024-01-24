#include <iostream>
using namespace std;

inline int func(int& a,int& b){
    return (a>b) ? a : b;
}

int main()
{
    int a=1,b=2;
    int nas = 0;
    // if(a>b){
    //     ans =a;
    // }else{
    //     ans=b;
    // 
    // }
    nas = func(a,b);
    cout << nas << endl;

    a = a +3;
    b = b +1;

    nas = func(a,b);
    cout << nas << endl;

    
    
}