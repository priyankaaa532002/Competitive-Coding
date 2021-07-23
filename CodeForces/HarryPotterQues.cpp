#include <iostream>
using namespace std;

int main(){

	int sum = 0;
    int i=10;

	int code;

	cin >> code;

	while(code>0){
		//int i = 10;
		int ld = code % 10;
		sum = sum+ (ld*i);
		code=code/10;
		i--;
	}

    if(sum % 11 == 0){
		cout<<"Legal ISBN";
    }else{
		cout<<"Illegal ISBN";
    }

	int n,l,w,h;
	cin>>l;
	cin>>n;
	while(n>0){
		cin>>w>>h;
		if((w < l || h < l)){
			cout<<"UPLOAD ANOTHER"<<endl;
		}else{
			if(w==h){
				cout<<"ACCEPTED"<<endl;
			}
			else{
				cout<<"CROP IT"<<endl;
			}
		}
		n--;
	}
}