#include <iostream>
using namespace std;

void findMissingEle(int arr[], int n)
{
    int sum = 0;
    int s = ((n + 1) * (n + 2)) / 2;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Missing : " << s - sum << "\n";
}

void findMissingEle2(int arr[], int l, int h, int n)
{
    int missing = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] != 1)
        {
            missing = arr[i] + 1;
        }
    }
    cout << "Missing : " << missing << "\n";
}

void findMissingEle3(int arr[], int l, int h, int n)
{
    int diff = l - 0;
    int missing = l;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            missing = i + diff;
            break;
        }
    }
    cout << "Missing : " << missing << "\n";
}

void manyFindMissingEle4(int arr[], int l, int h, int n)
{
    int diff = l - 0;
    int missing = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                cout << i + diff << " ";
                diff++;
            }
        }
    } // O(n)
}

void unsortedFindMissingEle5(int arr[], int l, int h, int n)
{
    //USING HASH TABLE --> T(n) = O(n); //consumes space
    int H[n] = {0};
    for (int i = 0; i < n; i++)
    {
        H[arr[i]]++;
    }
    for (int i = l; i <= h; i++)
    {
        if (H[i] == 0)
        {
            cout << i << " ";
        }
    }
}

void duplicatesInSortedArray(int arr[], int n)
{
    int lastDuplicate = 0;
    //0->8->15->~
    //taking 2 pointers i->j then subtract
    cout << "\n";
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1] & arr[i] != lastDuplicate)
        {
            cout << arr[i] << " ";
            lastDuplicate = arr[i];
        }
    }
}

void countDuplicatesInSortedArray(int arr[], int n)
{
    int lastDuplicate = 0;
    //0->8->15->~
    //taking 2 pointers i->j then subtract
    cout << "\n";
    for (int i = 0; i < n - 1; i++)
    {
        int j = 0;
        if (arr[i] == arr[i + 1])
        {
            j = i + 1;
            while (arr[j] == arr[i] && j < n)
            {
                j++;
            }
            cout << arr[i] << " " << j - i << "\n";
            i = j - 1;
        }
    }
}

void duplicatesInSortedArray2(int arr[], int n)
{
    //USING HASH TABLE ------------------------
    //O(N)
    cout << "\n";
    int length = arr[n - 1] + 1;
    int H[length] = {0};
    for (int i = 0; i < n; i++)
    {
        H[arr[i]]++;
    }
    for (int i = 0; i < length; i++)
    {
        if (H[i] > 1)
        {
            cout << i << " " << H[i] << "\n";
        }
    }
}

void duplicatesInUnSortedArray(int arr[], int n){
    //O(N^2)
    int count;
    for (int i = 0; i < n-1; i++)
    {
        count = 1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j] && arr[i] != -1)
            {
                count++;
                arr[j] = -1;
            }
        }
        if (count>1)
        {
            cout<<arr[i]<<" "<<count<<"\n";
        }
    }
}

void duplicatesInUnSortedArray2(int arr[], int n){
    //O(N)
    cout<<"\n";
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }

    int H[max+1] = {0};
    for (int i = 0; i < n; i++)
    {
        H[arr[i]]++;
    }
    
    for (int i = 0; i < max+1; i++)
    {
        if (H[i]>1)
        {
            cout<<i<<" "<<H[i]<<"\n";
        }  
    }
}

void pairOfElesWithSumK(int arr[], int n,int k){
    //O(n^2)
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==k)
            {
                cout<<arr[i]<<" & "<<arr[j]<<"\n";
            }
        }        
    }
}

void twoPointer(int arr[], int n, int k) {
	int i=0;
	int j = n-1;

	while(i<j) {
		if(arr[i] + arr[j] == k) {
			cout<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
			i++;
			j--;
		} else if(arr[i] + arr[j] < k) {
			i++;
		} else {
			j--;
		}
	}
}

void pairOfElesWithSumKWithHahsing(int arr[], int n, int k){
    cout<<"\n";
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }

    int H[max+1] = {0};
    for (int i = 0; i < n; i++)
    {
        if (H[k-arr[i]]!=0 && k-arr[i]>0)
        {
            cout<<arr[i]<<" + "<<k-arr[i]<<"\n";
        }
        H[arr[i]]++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // int arr[11] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
    // 11
    //sum -> 12 - sum(loop)
    // findMissingEle(arr, 11);
    // int arr1[] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16};
    // findMissingEle2(arr1, 6, 16, 10);
    // findMissingEle3(arr1, 6, 16, 10);

    // int arr2[] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
    // manyFindMissingEle4(arr2, 6, 19, 11);

    // int arr3[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    // unsortedFindMissingEle5(arr3, 1, 12, 10);

    // int arr4[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    // duplicatesInSortedArray(arr4, 10);
    // countDuplicatesInSortedArray(arr4, 10);
    // duplicatesInSortedArray2(arr4, 10);

    // int arr5[] = {8,3,6,4,6,5,6,8,2,7};
    // int arr6[] = {8,3,6,4,6,5,6,8,2,7};
    // duplicatesInUnSortedArray(arr5,10);
    // duplicatesInUnSortedArray2(arr6,10);

     int arr7[] = {6,3,8,10,16,7,5,2,9,14};
    // pairOfElesWithSumK(arr7,10,10);
    pairOfElesWithSumKWithHahsing(arr7,10,10);
    // int arr8[] = {2,3,5,6,7,8,9,10,14,16};
    // twoPointer(arr8,10,11);

    return 0;
}