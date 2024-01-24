#include <iostream>
using namespace std;

bool eveod(int n) {
    if (n%2==0){
        return 1;
    } else{
        return 0;

    }
}
int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num; // take input from user

    if (eveod(num)) {
        cout << "Number is even "<<endl;
    }else{
        cout<<"Number is odd"<< endl;
    }

}