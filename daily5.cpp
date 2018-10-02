#include<bits/stdc++.h>
#define ll long long
#define str string
#define pb  push_back

using namespace std ;
int main()
{
	ll n =5, i = 0, j = 0,p , q ,a;
	for(i = 1 ; i <= n ; i++)
	{
		for(j = 1 ; j <= n ; j++)
		{
			cin >> a;
			if(a==1)
			{
				p = i , q = j;
			}	
		}
	}
	cout<< abs(p - 3)+abs(q-3)<<endl;
}	
