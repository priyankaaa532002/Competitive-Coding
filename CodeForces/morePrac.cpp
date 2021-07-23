#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin>>t;
	while(t>0)
	{
		string s;
		cin>>s;
		int len =  s.length();
		int flag = 0;
		if(s == string(s.rbegin(),s.rend()))
		{
			flag=1;
		}
		else{
			cout<<s<<"\n";
		}

		
		if(flag == 1)
		{
			//aaaaaa
			//[0]!=[1]
			int key = 0;
			for(int i = 0; i < len-1 ;i++)
			{
				if(s[i]!=s[i+1])
				{
					key = 1;
					break;
				}	
			}

			if(key == 1){

				for(int i = 0; i < len-1 ;i++)
				{
					if(s[i]!=s[i+1])
					{
						char temp = s[i];
						s[i] = s[i+1];
						s[i+1] = temp;

						break;
					}	
				}
				cout<<s<<"\n";
			}
			else{
				cout<<-1<<"\n";
			}
		}

		t--;
	}

	return 0;
}