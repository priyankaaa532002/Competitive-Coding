#include <iostream>
#include <string>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        string data;
        cin >> data;
        int len = data.length();
        string stLen = to_string(len - 2);

        if (len > 10)
        {
            char first = data[0];
            char last = data[len - 1];
            data = first + stLen + last;
        }
        cout << data<<endl;
        t--;
    }
}