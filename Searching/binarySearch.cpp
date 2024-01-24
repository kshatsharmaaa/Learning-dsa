#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int m = s + ((e - s) / 2);
    while (s <= e)
    {
        if (arr[m] == k)
        {
            return m;
        }
        if (k > arr[m])
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
        m = s + ((e - s) / 2);
    }
    return -1;
}
int main()
{

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int index=binarySearch(even, 6, 3);
    cout<<"index "<<index;
    cout << endl
         << endl
         << "-----------------" << endl
         << endl;
    ;
    int indexx=binarySearch(odd, 5, 14);
    cout<<"index "<<indexx;

}