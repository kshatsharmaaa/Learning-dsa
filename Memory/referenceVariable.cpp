#include <iostream>
using namespace std;

int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;
}

void update1(int n){
    n++;
}

void update2(int& n){//reference variable
    n++;
}

int main()
{
    /*
    int i = 5;
    int& j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    */

   int n =5;
   cout <<"Before "<<n<<endl;
   update1(n);
   cout<<"After1 "<<n<<endl;
   update2(n);
   cout<<"After2 "<<n<<endl;

   func(n);

}