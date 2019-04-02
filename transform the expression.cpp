#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
const ll N=10000;
using namespace std;

int main()
{
	ll t,i;
	string expression;
	stack<char>brackets_operations;
	cin>>t;
	vector<char>result;
	while(t--)
	{
		cin>>expression;
		result.clear();
		for(i=0;i<expression.length();i++)
		{
			if(expression[i]=='(')
			{
				brackets_operations.push('(');
			}
			else if(expression[i]==')')
			{   char top=brackets_operations.top();
				while(top!='(' && !brackets_operations.empty())
				{
					result.push_back(top);
					brackets_operations.pop();
					top=brackets_operations.top();
				}
				if(!brackets_operations.empty())
				{
					brackets_operations.pop();
				}
				
			}
			else if(expression[i]=='+' || expression[i]=='-' || expression[i]=='*' || expression[i]=='/' || expression[i]=='^')
			{
				brackets_operations.push(expression[i]);
			}
			else
			{
				result.push_back(expression[i]);
			}
		}
		for(i=0;i<result.size();i++)
		{
			cout<<result[i];
		}
		cout<<endl;
	}							
}
