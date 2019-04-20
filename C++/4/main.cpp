#include <bits/stdc++.h>
using namespace std;
#define ll long long int


ll reverse(ll n){
ll rev=0;
while(n){
    rev = rev*10 + n%10;
    n = n/10;
}
return rev;
}


ll isPalin(ll n){
return reverse(n)==n;
}

int main()
{
    ll i,j,answer=0;
    for(i=100;i<=999;++i)
        for(j=100;j<=999;++j)
            if(isPalin(i*j))answer = max(answer,i*j);
    cout<<answer;

	return 0;
}
