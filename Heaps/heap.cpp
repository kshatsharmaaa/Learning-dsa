#include <iostream>
#include <queue>
using namespace std;

class heap {
    public:
        int arr[100];
        int size;

        heap() {
            arr[0] = -1;
            size = 0;
        }

        void insert(int val) {

            size = size + 1;// 1 index
            int index = size; // is index pe value dalnie
            arr[index] = val;

            while(index > 1) {
                int parent = index/2;

                if(arr[parent] < arr[index]){ //max heap
                    swap(arr[parent],arr[index]);
                    index = parent;
                }
                else{
                    return;
                }
            }
        }

        void print() {
            for(int i=1; i<=size; i++) {
                cout << arr[i] << " ";
            }
            cout <<endl;
        }

        void deletefromHeap() {
            if(size == 0) {
                cout << "nothing to delete" << endl;
                return;
            }

            arr[1] = arr[size];
            size--; //last node removal

            //max heap formation
            int i = 1; //new root node 
            while(i<size){
                int leftIndex = 2*i;
                int rightIndex = 2*i + 1;

                if(leftIndex < size && arr[i] < arr[leftIndex])
                {
                    swap(arr[i],arr[leftIndex]);
                    i = leftIndex;
                }
                else if(rightIndex < size && arr[i] < arr[rightIndex])
                {
                    swap(arr[i],arr[rightIndex]);
                    i = rightIndex;
                }
                else{
                    return;
                }
            }

        }
};

void heapify(int arr[], int n, int i){
    
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <= n && arr[largest] < arr[left]) {
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){ //update hogya
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);//next iteration 
    }
}

void heapSort(int arr[], int n) {
    int t = n;
    while(t>1){
        //step 1 : swap
        swap(arr[t],arr[1]);
        t--; 
        //step 2
        heapify(arr, t, 1);
    }
}

int main() {

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deletefromHeap();
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;

    //heap creation
    for(int i=n/2; i>0; i--){
        heapify(arr, n, i);
    }

    cout << "heapify result :" <<endl;
    for(int i=1; i<=n; i++) {
        cout << arr[i] << " ";
    }cout <<endl;

    //sorting
    heapSort(arr,n);

    cout << "heap sort result :" <<endl;
    for(int i=1; i<=n; i++) {
        cout << arr[i] << " ";
    }cout <<endl;

    cout << "using priority queue here "<<endl;
    //maxheap hota h by default
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout <<"element at top : "<<pq.top() <<endl;

    //min heap

    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);
    cout <<"element at minheap's top : "<<minheap.top() <<endl;
    return 0;
}