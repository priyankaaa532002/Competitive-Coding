#include <iostream>
#include <string>
#include <array>
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

//array<int, 3> arr; -->{0 0 0} cuz global

int main(){
	double val = 10.0;
	cout<< val <<"\n";

	//cout<< priyanka::getVal() <<"\n";

	node *pika = new node("meow",5,20.5,'a');

	//Arrays -> int arr[100];
	//array<int, 3> arr; -->{? ? ?}
	//array<int, 5> arr = {1 2 3}; -->{1 2 3 0 0}
	int arr_[100] = {0};

//CONTAINER ARRAY
	array<int , 5> arr;
	arr.fill(10); //--> {10, 10 ,10, 10, 10}

	for (int i = 0; i < 5; i++)
	{
		cout<< arr.at(i) <<" ";
	}

//ITERATORS --> begin(),end()[after last element],rbegin(),rend()
	array<int ,5>arr2 = {1,2,3,4,5};
	for (auto it =  arr2.begin(); it != arr2.end();it++)
	{
		/* code */
	}
	
}