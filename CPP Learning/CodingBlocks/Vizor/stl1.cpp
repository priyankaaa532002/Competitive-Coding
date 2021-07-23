#include <iostream>
#include <string>
using namespace std;

// namespace priyanka{
// 	int val = 50;

// 	int getVal(){
// 		return val*10;
// 	}
// }

struct node
{
	string str;
	int num;
	double doub;
	char x;

	node(string str_, int num_, double doub_, char x_)
	{
		str = str_;
		num = num_;
		doub = doub_;
		x = x_;
	}
};

int main(){
	double val = 10.0;
	cout<< val <<"\n";

	//cout<< priyanka::getVal() <<"\n";

	node *pika = new node("meow",5,20.5,'a');




}