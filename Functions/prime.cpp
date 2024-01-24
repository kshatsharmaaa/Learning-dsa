#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "n : ";
    cin >> n;

    int i = 2;

    int flag = 0;

    while(i<n)
    {
        if(n%i==0){
            flag++;
            i++;
            break;
            
        }
        else
        {
            
            i++;
        }
        
        
    }
    if(flag>0){
        cout << n << " is not a prime number" << endl;
    }
    else{
        cout << n << " is a prime number";
    }


}