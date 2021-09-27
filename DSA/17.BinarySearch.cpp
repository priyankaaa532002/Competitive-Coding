#include <iostream>
#include <array>
#include <cstdlib>

using namespace std;

int ascendingOrderArray(int arr[],int ele,int n){
    int start = 0;
    int end = n - 1;
    
    while (start<=end)
    {
        int mid = (start+end)/2;
        //incase of int overflow(prevent overflow)
        // start + (end - start)/2
        if (ele == arr[mid])
        {
            return mid;
        }
        else if(ele < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }   
    }
    return -1;
}

int descendingSortedArray(int arr[],int ele,int n){
    int start = 0;
    int end =  n - 1;
    while (start<=end)
    {
        int mid = (start+end)/2;
        //incase of int overflow(prevent overflow)
        // start + (end - start)/2
        if (ele == arr[mid])
        {
            return mid;
        }
        else if(ele < arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }   
    }
    return -1;
}

int orderAgnosticSearch(int arr[],int ele,int n){
    //when ascending / descending not given
    //arr[0] < arr[1] -> asc else desc
    if (n==1)
    {
        if (arr[0]==ele)
        {
            return 0;
        }else{
            return -1;
        }
        
    }else if (arr[0]<arr[1])
    {
        return ascendingOrderArray(arr,ele,n);
    }else{
        return descendingSortedArray(arr,ele,n);
    }
}

int firstOccurence(int arr[],int ele,int n){
    //2 4 10 10 10 18 20
    //0 1  2  3  4  5  6
    //0+6/2 = 3
    //result = mid;
    //end-> mid - 1 (to search if there are other 10s before mid)
    //=> search(10) + mid -> 1st occurance

    int start = 0;
    int end = n - 1;
    int res = -1;
    
    while (start<=end)
    {
        int mid = (start+end)/2;
        //incase of int overflow(prevent overflow)
        // start + (end - start)/2
        if (ele == arr[mid])
        {
            res = mid;
            end = mid - 1;
        }
        else if(ele < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }   
    }
    return res;
}

int lastOccurence(int arr[],int ele,int n){
    
    int start = 0;
    int end = n - 1;
    int res = -1;
    
    while (start<=end)
    {
        int mid = (start+end)/2;
        //incase of int overflow(prevent overflow)
        // start + (end - start)/2
        if (ele == arr[mid])
        {
            res = mid;
            start = mid + 1;
        }
        else if(ele < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }   
    }
    return res;
}

int countOfElement(int arr[],int ele,int n){
    //last index - first index + 1
    int first = firstOccurence(arr,ele,n);
    int last = lastOccurence(arr,ele,n);
    int count = last - first +1;
    return count;
}

int timesRotatedClockwise(int arr[],int n){
    //given rotataed sorted array
    //2 5 6 8 11 12 15 18
    //11 12 15 18 2 5 6 8 --> 4 times
    //no of times rotated = depends on index of min element(pivot)
    //for this chack neighboring elements
    //min should be smaller than both neighbours
    //compare mid with start and end
    //move towards unsorted path
    int start = 0;
    int end = n - 1;
    
    while (start<=end)
    {
        if (arr[start] <= arr[end])
        {
            return start;
        }
        int mid = (start + end)/2;
        int next = (mid+1)%n;
        int prev = (mid-1+n)%n;
        if (arr[mid] <= arr[next] && arr[mid]<=arr[prev])
        {
            return mid;
        }else if(arr[mid] <= arr[end]){
            end = mid - 1;
        }else if(arr[mid] >= arr[start]){
            start = mid + 1;
        }   
    }  
    return -1;
}

int timesRotatedAntiClockwise(int arr[],int n){
    //given rotataed sorted array
    //2 5 6 8 11 12 15 18
    //11 12 15 18 2 5 6 8 --> 4 times
    //no of times rotated = depends on index of min element(pivot)
    //for this chack neighboring elements
    //min should be smaller than both neighbours
    //compare mid with start and end
    //move towards unsorted path
    int start = 0;
    int end = n - 1;
    
    while (start<=end)
    {
        if (arr[start] <= arr[end])
        {
            return start;
        }
        int mid = (start + end)/2;
        int next = (mid+1)%n;
        int prev = (mid-1+n)%n;
        if (arr[mid] <= arr[next] && arr[mid]<=arr[prev])
        {
            return (n-mid) % n;
            //FOF ANTICLOCKWISE ROTATED-->
            // (l-mid) % l
        }else if(arr[mid] <= arr[end]){
            end = mid - 1;
        }else if(arr[mid] >= arr[start]){
            start = mid + 1;
        }   
    }  
    return -1;
}

//IF ROTATED FROM START TO END -> ANICLOCKWISE
// END TO START -> CLOCKWISE
int elementInSortedRotated(int arr[],int ele,int n){
    //11 12 15 18 2 5 6 8
    //find min ele
    int start = 0;
    int end = n - 1;
    
    int min = timesRotatedClockwise(arr,n);
    if (ele<arr[start])
    {
        start = min;

        while (start<=end)
        {
            int mid = start + (end - start)/2;
            if (arr[mid] == ele)
            {
                return mid;
            }else if(arr[mid] < ele){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return -1;
        
    }else{
        end = min -1;

        while (start<=end)
        {
            int mid = start + (end - start)/2;
            if (arr[mid] == ele)
            {
                return mid;
            }else if(arr[mid] < ele){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return -1;
    }
    

}

int searchingInNearlySortedArray(int arr[],int ele,int n){
    //ith element can be found in i+1 or i-1 or i
    //5 10 30 20 40
    //0  1 2<->3  4
    //check bounds
    int start = 0;
    int end = n - 1;
    while (start<=end)
    {
        int mid = start + (end - start)/2;
        if (ele == arr[mid])
        {
            return mid;
        }else if((ele == arr[mid - 1]) && (mid - 1 >= start)){
            return mid - 1;
        }else if ((ele == arr[mid + 1]) && (mid + 1 <= end))
        {
            return mid + 1;
        }else if (ele < arr[mid])
        {
            end = mid - 2;
        }else if (ele > arr[mid])
        {
            start = mid + 2;
        }   
    }
    return -1;
    
}

int floorOfElementInSortedArray(int arr[],int ele,int n){
    //1,2,3,4,8,10,10,12,19
    //0 1 2 3 4  5  6  7  8
    // lets take 5 as element
    //floor-> greatest element smaller than the given 
    //store candidate lesser than 5

    int start = 0;
    int end = n-1;
    int candidate = -1;
    int index = -1;
    while (start <= end)
    {
        int mid = start +(end-start)/2;
        if (ele == arr[mid])
        {
            return mid;
        }else if (ele < arr[mid])
        {
            end = mid - 1;  
            
        }else if (arr[mid] > candidate && arr[mid]< ele)
        {
            index = mid;
            candidate = arr[index];
            start = mid + 1;
        } 
    } 
    return index;
}

int ceilOfElementInSortedArray(int arr[],int ele,int n){
    //1,2,3,4,8,10,10,12,19
    //0 1 2 3 4  5  6  7  8
    // lets take 5 as element
    //ceil-> smallest element greater than the given 
    //store candidate greater than 5

    int start = 0;
    int end = n-1;
    int candidate = 999;
    int index = -1;
    while (start <= end)
    {
        int mid = start +(end-start)/2;
        if (ele == arr[mid])
        {
            return mid;
        }else if (ele < arr[mid])
        {
            index = mid; //binary search gives -> index of ceil
            candidate = arr[index];
            end = mid - 1;  
            
        }else if (arr[mid]< ele)
        {
            start = mid + 1;
        } 
    } 
    return index;
}

int nextAlphabeticalElement(char arr[],char ele,int n){
    // a c f h
    // key = f
    int start = 0;
    int end = n-1;
    int index = -1;
    while (start <= end)
    {
        int mid = start +(end-start)/2;
        if (ele == arr[mid])
        {
            start = mid + 1;
        }else if (ele < arr[mid])
        {
            index = mid; //binary search gives -> index of ceil
            end = mid - 1;  
            
        }else if (arr[mid]< ele)
        {
            start = mid + 1;
        } 
    } 
    return index;
}

// int infiniteSortedArray(int arr[],int ele,int n){
//     //face to face interview ques

// }

int minimumDifferenceElement(int arr[],int ele,int n){
    int start = 0;
    int end = n - 1;
    
    while (start<=end)
    {
        int mid = (start+end)/2;
        if (ele == arr[mid])
        {
            return arr[mid];
        }
        else if(ele < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }   
    }
    if (end<0)
    {
        end = 0;
    }
    if (start>(n-1))
    {
        start = n-1;
    }
    
    
    long long int start_diff = std::abs(ele - arr[start]);
    long long int end_diff = std::abs(ele - arr[end]);
    cout<<start<<" "<<arr[start]<<" "<<end<<" "<<arr[end]<<endl;
    if (start_diff < end_diff)
    {
        return arr[start];
    }else{
        return arr[end];
    }
    
}

int peakElement(int arr[],int n){
    int low = 0;
    int high = n-1;
    if(n==1){
            return 0;
        }
    while (low<=high)
    {
        int mid = low + (high - low)/2;
        if (mid>0 && mid<n-1)
        {
            if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                return mid;
            }else if (arr[mid-1]>arr[mid])
            {
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        else if (mid == 0)
        {
            if (arr[0]>arr[1])
            {
                return 0;
            }else{
                return 1;
            }
        }
        else if (mid == n-1)
        {
            if (arr[n-1]>arr[n-2])
            {
                return n-1;
            }else{
                return n-2;
            }   
        }   
    }
    return -1;
}

int maxElementInBitionicArray(int arr[],int n){
    //BITONIC ARRAY->
    //Monotonicly increasing and then decreasing
    //1 3 8 12 4 2 
    //always has single peak element
    int low = 0;
    int high = n-1;
    
    while (low<=high)
    {
        int mid = low + (high - low)/2;
        if (mid>0 && mid<n-1)
        {
            if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                return mid;
            }else if (arr[mid-1]>arr[mid])
            {
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        else if (mid == 0)
        {
            if (arr[0]>arr[1])
            {
                return 0;
            }else{
                return 1;
            }
        }
        else if (mid == n-1)
        {
            if (arr[n-1]>arr[n-2])
            {
                return n-1;
            }else{
                return n-2;
            }   
        }   
    }
    return -1;
}


int asc(int arr[],int ele,int start,int end){

    while (start<=end)
    {
        int mid = (start+end)/2;
        //incase of int overflow(prevent overflow)
        // start + (end - start)/2
        if (ele == arr[mid])
        {
            return mid;
        }
        else if(ele < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }   
    }
    return -1;
}

int dsc(int arr[],int ele,int start,int end){
    while (start<=end)
    {
        int mid = (start+end)/2;
        //incase of int overflow(prevent overflow)
        // start + (end - start)/2
        if (ele == arr[mid])
        {
            return mid;
        }
        else if(ele < arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }   
    }
    return -1;
}

int serachInBitonicArray(int arr[],int ele,int n){
    int peak = maxElementInBitionicArray(arr,n);
    int _asc = asc(arr,ele,0,peak-1);
    int _dsc = dsc(arr,ele,peak,n-1);
    if (_asc == -1 && _dsc == -1)
    {
        return -1;
    }
    
    if (_asc != -1)
    {
        return _asc;
    }else{
        return _dsc;
    }
    
}

void searchInSortedMatrix(int arr[4][4],int ele, int n,int m){
    //all rows and columns sorted
    //start from top right (i = 0, j = m-1)
    //worst case O(n+m)
    int i = 0;
    int j = m-1;
    
    while(i>= 0 && i <n && j >= 0 && j<m){
        if(arr[i][j] == ele){
            cout<<i<<" "<<j;
            return;
        }
        else if (arr[i][j] > ele)
        {
            j--;
        }else if (arr[i][j]<ele)
        {
            i++;
        }
    }
    cout<<-1;
}

int main()
{
    //BINARY SEARCH
    //for sorted arrays ONLY
    //arr[]: 1 2 3 4 5 6 7 8 9 10
    //in     0 1 2 3 4 5 6 7 8 9
    //      start              end
    //mid = start+end/2 => 4th index
    //mid = mid - 1 => 3
    //valid -> start < end
    //start == end -> 1 element
    //divide and conquer
    //O(logn)

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"\n"<<ascendingOrderArray(arr,4,10);
    

    int arr2[] = {10,9,8,7,6,5,4,3,2,1};
    cout<<"\n"<<descendingSortedArray(arr2,4,10);

    cout<<"\n"<<orderAgnosticSearch(arr,4,10);

    cout<<"\n"<<orderAgnosticSearch(arr2,4,10);

    int arr3[] = {1};
    cout<<"\n"<<orderAgnosticSearch(arr3,2,1);

    int arr4[] ={2,4,10,10,10,18,20};
    cout<<"\n"<<firstOccurence(arr4,10,7);
    cout<<"\n"<<lastOccurence(arr4,10,7);
    cout<<"\n"<<countOfElement(arr4,10,7);

    int arr5[] = {3,4,5,1,2};
    cout<<"\n"<<timesRotatedClockwise(arr5,5);
    cout<<"\n"<<timesRotatedAntiClockwise(arr5,5);

    int arr6[] ={66, 72, 79, 86, 95, 104, 106 ,110, 119, 123, 124, 129 ,132 ,136, 137 ,142 ,150 ,2, 12, 14, 17, 26, 30, 36, 38, 46, 52, 60};
    cout<<"\n"<<timesRotatedClockwise(arr6,28);

    int arr7[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int arr8[] = {3,5,1,2};
    cout<<"\n"<<elementInSortedRotated(arr7,10,9);
    cout<<"\n"<<elementInSortedRotated(arr8,6,4);

    int arr9[] = {5,10, 30 ,20 ,40};
    cout<<"\n"<<searchingInNearlySortedArray(arr9,10,5);

    int arr10[] = {1,2,3,4,8,10,10,12,19};
    int arr11[] = {1,2,3,5,6};
    cout<<"\n"<<floorOfElementInSortedArray(arr10,5,9);
    cout<<"\n"<<floorOfElementInSortedArray(arr10,13,9);
    cout<<"\n"<<floorOfElementInSortedArray(arr11,3,5);
    cout<<"\n"<<ceilOfElementInSortedArray(arr11,4,5);
    cout<<"\n"<<ceilOfElementInSortedArray(arr10,5,9);
    cout<<"\n"<<ceilOfElementInSortedArray(arr10,13,9);

    char arr12[] = {'a','b','c','e','f'};
    cout<<"\n"<<nextAlphabeticalElement(arr12,'d',5);

    int arr13[] ={1,2,3,5};
    cout<<"\n"<<minimumDifferenceElement(arr13,4,4);
    cout<<"\n"<<minimumDifferenceElement(arr13,1,4);
    int arr14[] = {2,5,6,8};
    cout<<"\n"<<minimumDifferenceElement(arr14,3,4);
    cout<<"\n"<<minimumDifferenceElement(arr14,1,4);
    cout<<"\n"<<minimumDifferenceElement(arr14,9,4);

    int arr15[] = {1,9,5,10,20,25,62};
    cout<<"\n"<<peakElement(arr15,7);
    int arr16[] = {1,2,3,2,1};
    cout<<"\n"<<maxElementInBitionicArray(arr16,5);
    int arr17[] = {11,12,15,18,2,5,6,8};
    cout<<"\n"<<serachInBitonicArray(arr17,12,8);

    int arr18[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,45},{32,33,39,50}};
    cout<<"\n";
    searchInSortedMatrix(arr18,29,4,4);
        return 0;
}