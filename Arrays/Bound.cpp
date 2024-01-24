#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int k)
{
    int s = 0, e = n - 1, m = s + ((e - s) / 2);
    int ans = -1;
    while (s <= e)
    {
        if (arr[m] == k)
        {
            ans = m;
            e = m - 1;
        }
        else if (k > arr[m])
        {
            s = m + 1;
        }
        else if (k < arr[m])
        {
            e = m - 1;
        }
        m = s + ((e - s) / 2);
    }
    return ans;
}

int lastOcc(int arr[], int n, int k)
{
    int s = 0, e = n - 1, m = s + ((e - s) / 2);
    int ans = -1;
    while (s <= e)
    {
        if (arr[m] == k)
        {
            ans = m;
            s = m + 1;
        }
        else if (k > arr[m])
        {
            s = m + 1;
        }
        else if (k < arr[m])
        {
            e = m - 1;
        }
        m = s + ((e - s) / 2);
    }
    return ans;
}

int main()
{

    int even[11] = {1, 2, 3,3,3,3,3,3,3, 3, 5};
    cout << "First occurence of element 3 is at Index : "<<firstOcc(even,11,3)<<endl;
    cout << "Last occurence of element 3 is at Index : "<<lastOcc(even,11,3);
}