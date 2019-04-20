#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll isPrime[1000010]={0};
vector<ll> Prime;

void sieve(){
	ll i,j;
	isPrime[0] = isPrime[1] = 1;
	for( i=2; i<1000010; i++)if(isPrime[i]==0)for(j=2*i; j<1000010; j+=i)isPrime[j]=1;
	for( i=1; i<1000010; i++)if(isPrime[i]==0)Prime.push_back(i);
}




int main()
{
	sieve();
	cout<<Prime[10001-1];

	return 0;
}
