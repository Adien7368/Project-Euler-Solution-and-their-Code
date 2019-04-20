#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll i,j;
	ll answer = 0;
	for(i=1;i<1000;i++)
        for(j=1;j+i<1000;++j)
            if(i*i + j*j == (1000-i-j)*(1000-i-j))
                answer = max(answer,i*j*(1000-i-j));
    cout<<answer;

	return 0;
}
