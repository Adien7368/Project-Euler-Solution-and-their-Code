#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ll n = 600851475143;
    ll answer = 1;
    for(ll i=2;i*i<=n;++i){
        while(n%i==0){
            answer = max(answer,i);
            n = n/i;
        }
    }
    answer = max(answer,n);
    cout<<answer;

	return 0;
}
