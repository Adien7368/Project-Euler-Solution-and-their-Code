#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll sum(ll x,ll n){
ll l = n/x;
return (x*l*(l+1))/2;
}

int main()
{
    ll n = 999;
    cout<<sum(3,n)+sum(5,n)-sum(15,n);

	return 0;
}
