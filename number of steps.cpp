#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
const ll N=10000;
using namespace std;

int main()
{
	ll t,x,y;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(x==y && x<=10000)
		{
			if(x%2==0)
			{
				cout<<x*2<<endl;
			}
			else
			{
				cout<<x*2-1<<endl;
			}
		}
		else if(x==y+2 && x<=10000)
		{
			if(x%2==0)
			{
				cout<<x*2-2<<endl;
			}
			else
			{
				cout<<x*2-3<<endl;
			}
		}
		else
		{
			cout<<"No Number"<<endl;
		}
	}													
}
