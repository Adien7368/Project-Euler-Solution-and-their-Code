#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll A[2000001]={0};
ll solve(ll i,ll n){
    if(n<i)
        return A[n];
    if(n%2==0)
        A[i] = 1 + solve(i,n/2);
    else
        A[i] = 1 + solve(i,3*n+1);
    return A[i];
}

int main()
{
	A[1] = 1;
	for(ll i=2;i<=1000000;++i)solve(i,i);

	ll answer=1;

	for(ll i=1;i<=1000000;++i)
        if(A[answer]<A[i])
            answer = i;
	cout<<answer;
	return 0;
}
