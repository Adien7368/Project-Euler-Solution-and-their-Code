#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll answer=0;

void fibo_solve(ll a,ll b){
    if(a%2==0)
        answer+=a;
    if(a+b>4000000)
        return;
    return fibo_solve(a+b,a);
}

int main()
{
    fibo_solve(2,1);
    cout<<answer;
	return 0;
}
