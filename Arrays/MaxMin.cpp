#include <iostream>
#include <climits>
using namespace std;

int getmax(int n[], int size)
{
    int maxi = INT_MIN;
    
    for(int i=0;i<size;i++) {
        //mentos zindagi 
        maxi = max(maxi,n[i]);
        //aam zindagi
        // if (n[i]>max ){
        //     max=n[i];
        // }
    }
    return maxi;
}
int getmin(int n[], int size)
{
    int min = INT_MAX;
    for(int i=0;i<size;i++) {
        if (n[i]<min ){
            min=n[i];
        }
    }
    return min;
}
int main()
{

    
    int n[3];

    for(int i =0;i<3;i++) {
        cin>>n[i] ;
    }

    cout << "max is " << getmax(n,3) << endl;
    cout << "min is " << getmin(n,3) << endl;



    return 0;
}