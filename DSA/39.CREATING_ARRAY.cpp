#include <iostream>
using namespace std;

class Array
{
public:
    int *A;
    int size;
    int length;
};

class Array2
{
public:
    int A[20];
    int size;
    int length;

    //DISPLAYING ---------------------------------------------
    void display2()
    {

        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
        cout << "\n";
    }

    //APPENDING ----------------------------------------------
    void append(int x)
    {
        if (length < size)
        {
            A[length] = x;
            length++;
        }
    }

    //INSERTING---------------------------------------
    void insert(int index, int x)
    {

        if (index >= 0 && index <= length)
        {
            for (int i = length; i > index; i--)
            {
                A[i] = A[i - 1];
            }
            A[index] = x;
            length++;
        }
    }

    //DELETING -------------------------------------
    void Delete(int index)
    {
        if (index >= 0 && index < length)
        {
            int del = A[index];
            for (int i = index; i < length - 1; i++)
            {
                A[i] = A[i + 1];
            }
            length--;
            cout << "\nThe deleted element was " << del << "\n";
        }
    }

    //LINEAR SEARCH =======================================
    int linearSearch(int key)
    {
        for (int i = 0; i < length; i++)
        {
            if (key == A[i])
            {
                return i;
            }
        }
        return -1;
    }

    //BINARY SEARCH (SHOULD BE SORTED)
    int binarySearch(int low, int high, int key)
    {

        low = 0;
        high = length - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (key == A[mid])
            {
                return mid;
            }
            else if (key < A[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }

    int binarySearch2(int low, int high, int key)
    {
        int mid;
        if (low <= high)
        {
            mid = (low + high) / 2;
            if (key == A[mid])
            {
                return mid;
            }
            else if (key < A[mid])
            {
                return binarySearch2(low, mid - 1, key);
            }
            else
            {
                return binarySearch2(mid + 1, high, key);
            }
        }
        return -1;
    }

    //GET
    int Get(int index)
    {
        if (index >= 0 && index < length)
        {
            return A[index];
        }
        return -1;
    }

    //SET
    void Set(int index, int x)
    {
        if (index >= 0 && index < length)
        {
            A[index] = x;
        }
    }

    //MAX
    int Max()
    {
        int max = A[0];
        for (int i = 0; i < length; i++)
        {
            if (A[i] > max)
            {
                max = A[i];
            }
        }
        return max;
    }

    //MIN
    int Min()
    {
        int min = A[0];
        for (int i = 0; i < length; i++)
        {
            if (A[i] < min)
            {
                min = A[i];
            }
        }
        return min;
    }

    //ADD SUM OF ARRAY
    int Sum()
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += A[i];
        }
        return sum;
    }

    int recSum(int n)
    {
        if (n < 0)
        {
            return 0;
        }
        else
        {
            return recSum(n - 1) + A[n];
        }
    }

    //AVERAGE

    int Average()
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += A[i];
        }
        return sum / length;
    }

    void Reverse(int length)
    {
        int B[length];
        for (int i = 0; i < length; i++)
        {
            B[i] = A[length - 1 - i];
        }
        for (int i = 0; i < length; i++)
        {
            A[i] = B[i];
        }

        display2();
    }

    void Reverse2(int length)
    {
        for (int i = 0; i < length / 2; i++)
        {
            int temp = A[i];
            A[i] = A[length - 1 - i];
            A[length - 1 - i] = temp;
        }
        display2();
    }

    void leftShift()
    {
        for (int i = 0; i < length; i++)
        {
            A[i] = A[i + 1];
        }
        A[length - 1] = 0;
        length--;
        display2();
    }

    void leftRotate()
    {
        int last = A[0];
        for (int i = 0; i < length; i++)
        {
            A[i] = A[i + 1];
        }
        A[length - 1] = last;
        display2();
    }

    void rightShift()
    {
        for (int i = length; i >= 0; i--)
        {
            A[i] = A[i - 1];
        }
        A[0] = 0;
        length++;
        display2();
    }

    void rightRotate()
    {
        int last = A[length - 1];
        for (int i = length - 1; i >= 0; i--)
        {
            A[i] = A[i - 1];
        }
        A[0] = last;
        display2();
    }

    void insertInSortedPosition(int x)
    {
        int i = length - 1;
        int temp;
        if (x < A[0])
        {
            temp = x;
        }

        while (A[i] > x)
        {
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = x;
        length++;
        A[0] = temp;

        display2();
    }

    //SORTED OR NOT
    bool isSorted()
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                return false;
            }
        }
        return true;
    }

    void posNeg()
    {
        int i = 0;
        int j = length - 1;
        //T(N) = O(n)
        while (i < j)
        {
            while (A[i] < 0)
            {
                i++;
            }
            while (A[j] >= 0)
            {
                j--;
            }
            if(i<j){
                swap(A[i],A[j]);
            }
        }
        display2();
    }
};

void display(Array arr)
{

    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << "\n";
    }
}

//MERGING =================================
Array2 *Merge(Array2 *arr1,Array2 *arr2){
    int i=0,j=0,k=0;
    Array2 *arr3 = new Array2;

    while (i<arr1->length && j<arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k]=arr1->A[i];
            k++,i++;
        }else{
             arr3->A[k]=arr2->A[j];
            k++,j++;
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k]= arr1->A[i];
        k++;
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k] = arr2->A[j];
        k++;
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;

    return arr3;
}

//UNION ================================================
Array2 *Union(Array2 *arr1,Array2 *arr2){
    int i=0,j=0,k=0;
    Array2 *arr3 = new Array2;

    while (i<arr1->length && j<arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k]=arr1->A[i];
            k++,i++;
        }else if(arr2->A[j] < arr1->A[i]){
            arr3->A[k]=arr2->A[j];
            k++,j++;
        }else{
            arr3->A[k] = arr1->A[i];
            j++,i++,k++;
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k]= arr1->A[i];
        k++;
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k] = arr2->A[j];
        k++;
    }
    arr3->length=k;
    arr3->size=10;

    return arr3;
}


//INTERSECTION ================================================
Array2 *Intersection(Array2 *arr1,Array2 *arr2){
    int i=0,j=0,k=0;
    Array2 *arr3 = new Array2;

    while (i<arr1->length && j<arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            i++;
        }else if(arr2->A[j] < arr1->A[i]){
            j++;
        }else{
            arr3->A[k] = arr1->A[i];
            j++,i++,k++;
        }
    }
    arr3->length=k;
    arr3->size=10;

    return arr3;
}

//DIFFERENCE ================================================
Array2 *Difference(Array2 *arr1,Array2 *arr2){
    int i=0,j=0,k=0;
    Array2 *arr3 = new Array2;

    while (i<arr1->length && j<arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k]=arr1->A[i];
            k++,i++;
        }else if(arr2->A[j] < arr1->A[i]){
            j++;
        }else{
            j++,i++;
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k]= arr1->A[i];
        k++;
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}


int main()
{
    // Array arr;
    // int n;
    // cin>>arr.size;
    // arr.A = new int[arr.size];
    // arr.length = 0;
    // //INSERTING NUMS
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr.A[i];
    // }
    // arr.length = n;
    // display(arr);

    Array2 arr2 = {{2, 3, 4, 5, 6}, 20, 5};
    arr2.append(10);
    arr2.insert(0, 1);
    arr2.Delete(1);
    arr2.display2();
    cout << arr2.linearSearch(4) << "\n";
    cout << arr2.binarySearch(0, arr2.length, 4) << "\n";
    cout << arr2.binarySearch2(0, arr2.length, 4) << "\n";

    Array2 arr3 = {{1, 2, 3, -4, 5, 6, -7, 8, 9, 10}, 10, 10};
    cout << arr3.Get(2) << "\n";
    // arr3.Set(2, 20);
    // cout << arr3.Get(2) << "\n";
    // cout << arr3.Max() << "\n";
    // cout << arr3.Min() << "\n";
    // cout << arr3.Sum() << "\n";
    // cout << arr3.Average() << "\n";

    // arr3.Reverse(arr3.length);
    // arr3.Reverse2(arr3.length);
    // arr3.leftShift();
    // arr3.leftRotate();
    // arr3.rightShift();
    // arr3.rightRotate();
    arr3.insertInSortedPosition(11);
    cout<<arr3.isSorted()<< "\n";
    arr3.posNeg();

    Array2 arr4 = {{2,6,10,15,25},10,5};
    Array2 arr5 = {{3,4,6,18,20},10,5};
    // 6 7 8 9 10
    // 1 2 3 4 5
    Array2 *arr6;

    // arr6 = Merge(&arr4,&arr5);
    // arr6 = Intersection(&arr4,&arr5);
    arr6 = Difference(&arr4,&arr5);
    arr6->display2();

    return 0;
}