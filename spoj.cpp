#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
const ll N=10000;
using namespace std;
vector<int> fact(int num,vector<int>&prime)
{   
	for(ll i=2;i<=num;i++)
	{   
		ll c=i,digit=0;
		vector<int>unit(200,0);
		vector<int>ten(200,0);
		vector<int>hundred(200,0);
		int d=c%10,e,f,carry1=0,carry2=0,carry3=0;
		c=c/10;
		e=c%10;
		c=c/10;
		f=c%10;
		for(ll j=prime.size()-1;j>=2;j--)
		{
			ll g=prime[j]*d+carry1;
			unit[j]=g%10;
			carry1=g/10;
			ll h=prime[j]*e+carry2;
			ten[j-1]=h%10;
			carry2=h/10;
			ll k=prime[j]*f+carry3;
			hundred[j-2]=k%10;
			carry3=k/10;
		}
		ll carry=0;
		for(ll j=200;j>=0;j--)
		{
			prime[j]=(ten[j]+unit[j]+hundred[j]+carry)%10;
			carry=(ten[j]+unit[j]+hundred[j]+carry)/10;
		}	
	}
	return prime;
}
int main()
{
	ll t,n;
	cin>>t;
	vector<int>prime;
	vector<int>v;
	while(t--)
	{   
		prime.clear();
		for(ll i=0;i<200;i++)
		{
			prime.pb(0);
		}
		prime.pb(1);
		v.clear();
		cin>>n;
		v=fact(n,prime);
		ll var=0;
		for(ll i=0;i<=200;i++)
		{   if(var==0 && v[i]!=0)
		    var=1;
		    if(var==1)
			cout<<v[i];
		}
		cout<<endl;
		
	}
}
