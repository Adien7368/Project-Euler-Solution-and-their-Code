#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// Answer is 40C20

int main()
{
	ll i,j;
    ll answer = 1;
    for(i=40;i>20;--i){
        answer = answer*i;
        answer = answer/(41-i);
    }
    cout<<answer;
	return 0;
}
