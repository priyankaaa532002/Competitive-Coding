#include <iostream>
#include <string>
using namespace std;

int main()
{
    int year;
    int key;
    
    cin >> year;
    

            // 1 2 3 4
            //1234%10=4
            //1234/10 % 10=3
            //1234//100 % 10=2
    while(year>0){
        year = year + 1;
        int one = year % 10;
        int two = (year/10) % 10;
        int three = (year/100) % 10;
        int four =  (year/1000);

        if(one != two && one != three && one != four && two !=three && two !=four && three != four){
            key = year;
            break;
        }
    }
    cout<<key;
}
