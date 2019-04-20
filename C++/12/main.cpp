#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll countDivisor(ll n){
ll sum=0;
for(ll i=1;i*i<=n;++i){
    if(n%i==0){
        sum+=2;
        if(n/i==i)sum--;
    }
}
return sum;
}

int main()
{

    ll answer=0;
    for(ll i=1;;++i){
        if(countDivisor((i*(i+1))/2)>500){
            answer = i*(i+1)/2;
            break;
        }
    }
    cout<<answer;
	return 0;
}
