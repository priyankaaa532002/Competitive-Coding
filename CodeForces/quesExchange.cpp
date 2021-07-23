#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string data;
    cin >> data;

    while (t > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (data[i] == 'B' && data[i + 1] == 'G')
            {

                char temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
                i++;
            }
        }
        t--;
    }

    cout<<data;
}