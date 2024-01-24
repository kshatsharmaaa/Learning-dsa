#include <iostream>
#include <math.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4], int row, int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<"sum for row "<<i<<" : "<<sum<<endl;
    }
}

int largestRowSum(int arr[][4], int row, int col){
    int maxi = INT64_MIN;
    int rowIndex=-1;
    int i;
    for( i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex =i;
        }
        
    }
    return rowIndex;
}

int main()
{
    
    int arr[3][4];
    cout << "Enter the elements" << endl;
    for(int i =0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
            
        }
    }
    cout << "Printing the array" << endl;
    for(int i =0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }

    /*
    cout<<"Enter the element to search" << endl;
    int target;
    cin>>target;


    if(isPresent(arr,target,3,4)){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    */

    printSum(arr,3,4);
    cout<<"largest row sum is at row number : "<<largestRowSum(arr,3,4)<<endl;
}