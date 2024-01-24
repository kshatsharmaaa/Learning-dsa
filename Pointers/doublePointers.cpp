#include <iostream>
using namespace std;

void update(int **p2){
    // p2=p2+1;//nochangee
    // *p2 = *p2 + 1;//changehoga
    **p2 = **p2 + 1;//change hoga

}

int main()
{

    int i = 5;
    int* p = &i;
    int** p2 = &p;
/*
    cout << "sab sahi chal raha hai" << endl;

    cout << "printing i"<<endl;
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    cout<<endl;
    cout << "printing adress of i" << endl;
    cout <<&i<<endl;
    cout <<p<<endl;
    cout<<*p2<<endl;
    cout<<endl;
    cout << "printing adress of p" << endl;
    cout<<&p<<endl;
    cout<<p2<<endl;//p2 ki value p ka addresshi toh h
    cout<<endl;
    */
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;
    update(p2);
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;



   






}