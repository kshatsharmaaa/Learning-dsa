#include <iostream>
using namespace std;

void sayDigit(int n,string arr[]) {
    
    //base case

    if(n == 0)
        return;

    //processing

    int digit = n%10;
    n=n/10;
    

    // recursive relation

    sayDigit(n,arr);//bacha hua no print krane k liye kyuki ab n 432 me se 43 hai 2 toh digit h 
    cout << arr[digit] << " ";
}

int main()
{

    int n;
    cin>>n;

    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigit(n,arr);
    


}