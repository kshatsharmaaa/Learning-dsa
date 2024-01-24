#include <iostream>
using namespace std;

void update(int arr[], int n) {
    cout << "Updating the array --------------->"<<endl;
    arr[0]=120;
    for(int i = 0; i < n; i++) {
        cout <<arr[i]<<" ";
    }
    cout << endl;
}

int main()
{
    int arr[3] = {1,2,3};

    update(arr,3);
    cout << "Inside Main --------------->"<<endl;
    for(int i = 0; i < 3; i++) {
        cout <<arr[i]<<" ";
    }
    cout << endl;
}