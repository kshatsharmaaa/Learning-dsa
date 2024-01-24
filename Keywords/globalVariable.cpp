#include <iostream>
using namespace std;

int score = 15;//global

void a(int i){
    cout << i <<endl;
    cout <<score<<" in a "<<endl;
}

void b(int i){
    cout <<score<<" in b "<<endl;
}

int main()
{
    cout <<score<<" in main "<<endl;
    int i = 5;
    a(i);
    b(i);
    
}