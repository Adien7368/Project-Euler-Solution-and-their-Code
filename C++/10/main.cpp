#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll isPrime[3000010]={0};
vector<ll> Prime;

void sieve(){
	ll i,j;
	isPrime[0] = isPrime[1] = 1;
	for( i=2; i<3000010; i++)if(isPrime[i]==0)for(j=2*i; j<3000010; j+=i)isPrime[j]=1;
	for( i=1; i<3000010; i++)if(isPrime[i]==0)Prime.push_back(i);
}

int main()
{
    sieve();
	ll answer=0;
	for(auto it:Prime)
        if(it<2000000)
            answer+=it;

    cout<<answer;
	return 0;
}
