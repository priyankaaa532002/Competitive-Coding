#include <iostream> 
using namespace std; 
  

struct Point 
{ 
   int x, y; 
}; 
  

int det(int x1, int y1, int x2, int y2, int x3, int y3) 
{ 
   return abs(x1*(y2 - y3) - y1*(x2 - x3) + 1*(x2*y3 - y2*x3))/2; 
} 
 
vector<int> v;
vector<string> v1;
int countPoints(Point arr[], int n) 
{ 
    int result = 0;   
    for (int i=0; i<n; i++) 
        for (int j=i+1; j<n; j++) 
            for (int k=j+1; k<n; k++) 
                if (det(arr[i].x, arr[i].y, arr[j].x, 
                        arr[j].y, arr[k].x, arr[k].y)){ 
                        int ar = det(arr[i].x, arr[i].y, arr[j].x, 
                        arr[j].y, arr[k].x, arr[k].y);
                        v.push_back(ar);
                    result++; 
                        }
  
    return result; 
} 
void sorting(Point arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j].x < arr[j+1].x){
                int temp = arr[j].x;
                    arr[j].x = arr[j+1].x;
                    arr[j+1].x = temp;
                int temp1 = arr[j].y;
                    arr[j].y = arr[j+1].y;
                    arr[j+1].y = temp1;
            }
        }
    }
}
void print(Point arr[], int n,int area){
    for (int i=0; i<n; i++) 
        for (int j=i+1; j<n; j++) 
            for (int k=j+1; k<n; k++) 
                if (det(arr[i].x, arr[i].y, arr[j].x, 
                        arr[j].y, arr[k].x, arr[k].y)){ 
                        int ar = det(arr[i].x, arr[i].y, arr[j].x,arr[j].y, arr[k].x, arr[k].y); 
                        if(ar==area){
                            cout<<"("<<arr[i].x<<","<<arr[i].y<<"),";
                            cout<<"("<<arr[j].x<<","<<arr[j].y<<"),";
                            cout<<"("<<arr[k].x<<","<<arr[k].y<<")";
                        } 
                        cout<<endl;
                        }
}
 
int main() 
{ 
    int n;
    cin>>n;
    Point arr[n];
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        arr[i]={x,y};
    }
    sorting(arr,n);
   int res = countPoints(arr, n); 
   //cout<<res<<endl;
   int min_ar = INT_MAX;
   for(auto i: v){
       if(i<min_ar) min_ar = i;
   }
   cout<<min_ar<<endl;
   print(arr,n,min_ar);
    return 0; 
} 