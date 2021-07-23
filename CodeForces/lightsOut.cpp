#include <bits/stdc++.h>
#include <string>
using namespace std;


int main()
{
    int arr[3][3];
    bool result[3][3];
    int i, j;
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            {
                result[i][j] = true;
            }
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            cin >> arr[i][j];
    }
    
    if(arr[0][0]%2 != 0)
    {
        result[0][0] = !result[0][0];
        result[1][0] = !result[1][0];
        result[0][1] = !result[0][1];
    }
    if(arr[1][0]%2 != 0)
    {
        result[0][0] = !result[0][0];
        result[1][0] = !result[1][0];
        result[2][0] = !result[2][0];
        result[1][1] = !result[1][1];
        
    }
    if(arr[2][0]%2 != 0)
    {
        result[2][0] = !result[2][0];
        result[2][1] = !result[2][1];
        result[1][0] = !result[1][0];
    }
    if(arr[0][1]%2 != 0)
    {
        result[0][0] = !result[0][0];
        result[0][1] = !result[0][1];
        result[1][1] = !result[1][1];
        result[0][2] = !result[0][2];
    }
    if(arr[1][1]%2 != 0)
    {
        result[1][1] = !result[1][1];
        result[0][1] = !result[0][1];
        result[2][1] = !result[2][1];
        result[1][0] = !result[1][0];
        result[1][2] = !result[1][2];
    }
    if(arr[2][1]%2 != 0)
    {

        result[1][1] = !result[1][1];
        result[2][0] = !result[2][0];
        result[2][1] = !result[2][1];
        result[2][2] = !result[2][2];
    }
    if(arr[0][2]%2 != 0)
    {
        result[0][1] = !result[0][1];
        result[0][2] = !result[0][2];
        result[1][2] = !result[1][2];
    }
    if(arr[1][2]%2 != 0)
    {
        result[0][2] = !result[0][2];
        result[1][1] = !result[1][1];
        result[1][2] = !result[1][2];
        result[2][2] = !result[2][2];
    }
    if(arr[2][2]%2 != 0)
    {
        result[2][2] = !result[2][2];
        result[2][1] = !result[2][1];
        result[1][2] = !result[1][2];
    }
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(result[i][j] == true) cout << 1;
            else cout << 0;
        }
        cout << '\n';
    }        
    
    return 0;
}