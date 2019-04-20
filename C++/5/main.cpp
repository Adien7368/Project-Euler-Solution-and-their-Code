#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll a,ll b){
if(b==0)return a;
return gcd(b,a%b);
}

ll lcm(ll a,ll b){
return a*b/gcd(a,b);
}

int main()
{

    ll answer=1;
    for(ll i=1;i<=20;++i)answer = lcm(answer,i);
    cout<<answer;
	return 0;
}
