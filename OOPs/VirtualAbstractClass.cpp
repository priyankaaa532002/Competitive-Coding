//Balance Calculation

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

class BANK_ACCOUNT
{
	protected:
	float balance;
	public:
	void getdata(){
		cin>>balance;
	}
	virtual void Balance()=0;

	virtual void Display(){
		cout<<balance;
	}
};

class REGULAR_ACCOUNT : public BANK_ACCOUNT
{
private:
	float penalty;
public:
	void getPenalty(){
		cin>>penalty;
	}

	void Balance(){
		balance = balance - penalty;
	}
};

class INTEREST_ACCOUNT : public BANK_ACCOUNT
{
private:
	float interestRate;
public:
	void getInterestRate(){
		cin>>interestRate;
	}

	void Balance(){
		balance = balance + interestRate;
	}
};

class CHECKING_ACCOUNT : public BANK_ACCOUNT
{
private:
	float penalty;
	
};

int main()
{
	


	return 0;
}