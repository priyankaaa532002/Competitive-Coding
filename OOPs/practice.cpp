#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

class A{
	int x;
public:
	void print(){
		cout<<"Inside A";
	}
};
class B : public A{
	int x;
	public :
	void print(){
		
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);


	return 0;
}