#include <iostream> 
using namespace std;

void merge(int arr[], int l, int m, int r) 
{
    int n1 = m - l + 1; 
    int n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j]; 

    int i = 0, j = 0, k = l;

while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j])
            {
            arr[k] = L[i]; 
            i++;
            }
        else
        {
        arr[k] = R[j]; j++;
        }
        k++; 
    }
    while (i < n1) 
    {
        arr[k] = L[i]; i++;
        k++;
    }
    while (j < n2) 
    {
        arr[k] = R[j]; j++;
        k++;
    }
    }


void mergeSort(int arr[], int l, int h) 
{
    if (l >= h) {
    return; //returns recursively
 }
    int mid = (h + l) / 2; 
    mergeSort(arr, l, mid); 
    mergeSort(arr, mid + 1, h); 
    merge(arr, l, mid, h);
}


int main() 
{
    int n;
    cout << "Enter the number of students" << endl; cin >> n;
    int arr[n];
    cout<<"Enter the Marks"<<endl;

    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
         
        arr[i]=c; 
    }
    mergeSort(arr, 0, n - 1);

    cout<<"Sorted Marks in Ascending order"<<endl; 
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << "\n";

    cout<<"Call for counselling in the order"<<endl; 

    for(int i =n-1;i>=0;i--)
    {
        cout<<arr[i]<<" "; 
    }
    cout << "\n"; 
    return 0;
}