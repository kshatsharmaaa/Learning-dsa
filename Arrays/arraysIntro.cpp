#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Printing the array --------------->"<<endl;
    for(int i = 0; i < size; i++) {
        cout <<arr[i]<<" ";
    }
    cout << endl;
}

int main()
{

    //declare
    int number[15];

    cout << "Value at index 0 is " << number[0] << endl;

    int second[3] = {5,7,11};
    int n = 15;
    for(int i=0;i<15;i++) {
        cout << second[i] << " ";
    }
    cout <<endl;
    printArray(second,3);
    printArray(number,15);
    int secondsize = sizeof(second)/sizeof(int);
    cout << secondsize <<endl;
    char ch[5];
    bool b[6];
    float f[7];
    double d[9];
    cout <<"Everything is fine."<< endl;
    return 0;
}