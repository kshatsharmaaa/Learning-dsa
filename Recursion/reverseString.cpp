#include <iostream>
using namespace std;

void reverse(string& n, int i, int j){
    //base case
    if(i>j)
        return;

    swap(n[i],n[j]); //first case
    i++;
    j--;

    //recursion
    reverse(n,i,j);
}

int main()
{

    string n = "eren";
    reverse(n,0,n.length()-1);

    cout <<n <<endl;

}