#include <iostream>
#include <queue>
using namespace std;

int solve(int *arr, int n, int k) {

    deque<int> maxi(k);
    deque<int> mini(k);

    //Addition of first k size window

    for(int i=0; i<k; i++) {//i se k tk mtlb window size tak
        while(!maxi.empty() && arr[maxi.back()] <= arr[i]) 
            maxi.pop_back();                //shuru me to ye khali hai to direct line no 19 pe push kra fr check krega ki vo max h kini

        while(!mini.empty() && arr[mini.back()] >= arr[i]) 
            mini.pop_back();                //likewise maxi

        maxi.push_back(i);
        mini.push_back(i);
    }
    int ans = 0;
    ans+= arr[maxi.front()] + arr[mini.front()];  //ye pehli window ka sum hai 

    //remaining windows

    for(int i=k; i<n; i++) {
        ans+= arr[maxi.front()] + arr[mini.front()];

        //next window

        //removal
        while(!maxi.empty() && i - maxi.front() >= k) {
            maxi.pop_front();
        }
        while(!mini.empty() && i - mini.front() >= k) {
            mini.pop_front();
        }

        //addition
        while(!maxi.empty() && arr[maxi.back()] <= arr[i]) 
            maxi.pop_back();

        while(!mini.empty() && arr[mini.back()] >= arr[i]) 
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);

        ans+= arr[maxi.front()] + arr[mini.front()];
    }

    

    return ans;
}

int main() {

    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << solve(arr, 7, 4) << endl;

    return 0;
}