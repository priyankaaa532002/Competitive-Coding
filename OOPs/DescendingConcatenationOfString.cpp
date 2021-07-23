#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;


int main()
{
	list <int> list1, list2, list3;
	
	int n;
	int m;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin>>temp;
		list1.push_back(temp);
		if(find(list3.begin(),list3.end(),temp) == list3.end()){
			list3.push_back(temp);
		}
	}
	cin>>m;
	for (int i = 0; i < m; ++i)
	{
		int temp;
		cin>>temp;
		list1.push_back(temp);
	}

	list1.merge(list2);
	list1.sort();
	reverse(list1.begin(),list1.end());
	list1.unique();

	list <int>::iterator it;
	for (it = list1.begin(); it !=list1.end(); ++it)
	{
		cout<<*it<<" ";
	}
	return 0;
}