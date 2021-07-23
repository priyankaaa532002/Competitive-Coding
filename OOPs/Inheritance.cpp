#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;


class A
{
	int x;
public:
	void print();
};
void A::print()
{
	cout<<"Inside A"<<endl;
}

class B: public A
{
	int x;
public:
	void print();
};

void B::print()
{
	cout<<"Inside B"<<endl;
}

main()
{
	B b;
	A a;
	a.print();
	b.print();
}