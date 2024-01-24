#include <iostream>
using namespace std;

int main()
{

    int amount;
    cout << "Enter amount : ";
    cin >> amount;
    cout<<endl;
    
    cout<<"Number of 100rs notes : "<< abs(amount/100)<<endl;
    amount= amount - abs(amount/100)*100;
    cout<<"Number of 50rs notes : "<< abs(amount/50)<<endl;
    amount= amount - abs(amount/50)*50;
    cout<<"Number of 20rs notes : "<< abs(amount/20)<<endl;
    amount= amount - abs(amount/20)*20;
    cout<<"Number of 1rs notes : "<< abs(amount/1)<<endl;
    amount= amount - abs(amount/1)*1;
    

    
}