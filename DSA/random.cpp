#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
      // Write your code here
      
        int stack1[] = {2,7 ,1, 15, 15, 9 ,6 ,14 ,15, 10};
        int stack2[] = {1, 6,14, 15, 15, 15, 7, 9, 2, 10};
        sort(stack1 , stack1 + 10);
        sort(stack2 , stack2 + 10);
        
        for(int i = 0; i < 10; i++){
            cout<<stack1[i]<<" ";
        }
        cout<<"\n";
        for(int i = 0; i < 10; i++){
            cout<<stack2[i]<<" ";
        }
        cout<<"\n";
        int count = 0;
        for(int i = 0; i < 10; i++){
            if(stack1[i]==stack2[i]){
                count++;
            }
        }
        cout<<count;
        //return count;
}