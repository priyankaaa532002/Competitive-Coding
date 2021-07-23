#include <bits/stdc++.h>
using namespace std;

int main()
{
    string data;
    cin >> data;
    int key = 0;

    for (int i = 0; i < data.length(); i++)
    {
        if (data[i] == 'H' || data[i] == 'Q' || data[i] == '9')
        {
            key++;
        }
    }
    if (key == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}