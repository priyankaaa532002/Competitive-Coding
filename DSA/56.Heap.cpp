#include <iostream>
using namespace std;

//HEAP ------------------------------------------------>
class Heap{
    public:
    void Insert(int arr[],int n,int val){// T = O(logn base 2)
        n = n+1;
        arr[n] = val;
        int i = n;
        int parent;
        while(i > 1){// 1->root node
        parent = i/2;
            if(arr[parent] < arr[i]){
                swap(arr[parent],arr[i]);
                i = parent;
            }else{
                return;
            }
        }
        
        
    }

    void createHeap(){//    T = O(nlogn)
        int arr[] = {0,10,20,30,25,5,40,35};
        int i;
        for(i = 2; i <= 7; i++){
            Insert(arr,i,55);
        }
    }

    void Delete(int arr[], int n){ // 
    //create nlogn
    //delete nlogn
    //total 2nlogn
        int x,i,j;
        x = arr[1];
        arr[1] = arr[n];
        i = 1, j = 2*i;
        while (j < n-1)
        {
            if(arr[j+1] > arr[j]){
                j = j + 1;
            }
            if(arr[i] < arr[j]){
                swap(arr[i],arr[j]);
                i = j;
                j = 2*j;
            }else{
                break;
            }
        }
        arr[n] = x; // asscending order 
    }

    //---------------------------
    void Heapify(int A[], int n){
    // index of leaf elements: (n+1)/2, index of last leaf element's parent = (n/2)-1
    for (int i=(n/2)-1; i>=0; i--){
        int j = 2 * i + 1;  // Left child for current i
        while(j < n-1){// Compare left and right children of current i
            if (A[j] < A[j+1]){
                j = j+1;
            }
            // Compare parent and largest child
            if (A[i] < A[j]){
                swap(A[i],A[j]);
                i = j;
                j = 2 * i + 1;
            } else {
                break;
            }
        }
    }
}

        void heapify2(int arr[],int n,int i){
            int largest = i;
            int l = 2*i;
            int r = 2*i + 1;
            while(l <= n && arr[l]> arr[largest]){
                largest = l;
            }
            while (r <=n && arr[r] > arr[largest])
            {
                largest = r;
            }
            if(largest != i){
                swap(arr[largest],arr[i]);
                heapify2(arr,n,largest);
            }
        }

        void heapSort(int arr[], int n){
            for (int i = n/2; i>= 1; i--)
            {
                heapify2(arr,n,i);
            }
        }

        void Delete2(int arr[],int n){
            for (int i = n; i >= 1; i--)
            {
                swap(arr[i],arr[i]);
                heapify2(arr,n,i);
            }
            
        }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
   
    
    Heap h;
    int arr[100];
    int size = 0;
    h.Insert(arr,size,1);
    h.Insert(arr,size+1,2);
    h.Insert(arr,size+2,3);

    for(int i =1; i<=3; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}