#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
	while(T>0)
	{
	    long N;
	    cin>>N;
	    long rev = 0;
	    while(N>0){
	        long ld = N%10;
	        rev=rev*10 + ld;
	        N=N/10;
	    }
	    cout<<rev<<endl;
	    T--;
	}
	cout<<"Task done";
	return 0;
}
