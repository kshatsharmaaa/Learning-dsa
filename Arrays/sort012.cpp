#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    cout << "Printing the array ------------->" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << end;
}

void sortOneTwo(int arr[], int n)
{
    int low, mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0 && mid <= high)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1 && mid <= high)
        {

            mid++;
        }
        else if (arr[mid] == 2 && mid <= high)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{

    int arr[8] = {1, 2, 0, 2, 1, 0, 1, 0};

    sortOneTwo(arr, 8);
    printArray(arr, 8);
}