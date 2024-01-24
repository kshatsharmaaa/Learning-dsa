#include <iostream>
using namespace std;

char getMaxi(string s) {
    int arr[26]={0};
    //create an array of count of char
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int number =0;
        //lowercase
        if(ch>='a'&&ch<='z') {
            number = ch -'a';
        }
        else{//uppercase
             number = ch -'a';
        }
        arr[number]++;
    }
    int maxi = -1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalAns = 'a'+ans;
    return finalAns;
}

int main()
{

    string s;
    cin >> s;
    cout<<getMaxi(s);
}