#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main()
{
	ll sqsum=0,sumsq=0;

	for(ll i=1;i<=100;++i){
        sqsum+=i*i;
        sumsq+=i;
	}
	cout<<-sqsum + sumsq*sumsq;

	return 0;
}
