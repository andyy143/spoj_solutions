#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
const ll N=10000;
using namespace std;

int main()
{
	ll t,x,y,z;
	while(1)
	{
		cin>>x>>y>>z;
		if(x==y && y==z &&z==0)
		{
			return 0;
		}
		else
		{
			if(y-x==z-y)
			{
				cout<<"AP"<<' '<<z+z-y<<endl;
			}
			else
			{
				cout<<"GP"<<' '<<z*(z/y)<<endl;
			}
		}
	}
														
}
