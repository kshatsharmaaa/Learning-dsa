#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "n : ";
    cin>>n;

    int i = 1;
    while(i <= n){

        // first number triangle

        int j = 1;
        while(j <= n - i + 1){
            cout << j << " ";
            j = j + 1;
        }

        //  star triangle

        int star = 2*(i - 1);
        while(star){
            cout << "* ";
            star--;
        }

        // second number triangle

        int num = n- i + 1;
        while(num){
            cout << num << " ";
            num--;
        }

        cout << endl;
        i = i + 1;

    }
}