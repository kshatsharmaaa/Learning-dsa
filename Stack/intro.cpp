#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> s;      //creation
    s.push(2);          //insertion
    s.push(4);
    s.pop();            //removal

    cout<<"Printing top element : "<< s.top()<<endl;

    if(s.empty())
        cout<< "empty" <<endl;
    else
        cout<< "not empty" <<endl;

    cout << "size of the stack is " <<s.size() << endl;
}