#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cd complex<long double>
#define MOD 1000000007
#define error(args...){string _s = #args; replace(_s.begin(),_s.end(),',',' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it,args);}
const double PI = acos(-1);
void err(istream_iterator<string> it){}
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args){cerr<<*it<<" = "<<a<<endl; err(++it,args...);}
ll isPrime[1000010]={0};
vector<ll> Prime;

void sieve(){
	ll i,j;
	isPrime[0] = isPrime[1] = 1;
	for( i=2; i<1000010; i++)if(isPrime[i]==0)for(j=2*i; j<1000010; j+=i)isPrime[j]=1;
	for( i=1; i<1000010; i++)if(isPrime[i]==0)Prime.push_back(i);
}

ll modMul(ll a,ll b,ll mod){
	ll res=0;
	if(mod<=MOD){
        return ((a%mod)*(b%mod))%mod;
	}
	while(b){
		if(b&1)res = (res+a)%mod;
		a = (2*a)%mod;
		b = b/2;
	}
	return res;
}

ll modPow(ll x,ll n,ll mod){
	ll r = 1;
	while(n){
		if(n&1)r = modMul(r,x,mod);
		x = modMul(x,x,mod);
		n = (n>>1);
	}
	return r;
}

ll bitR(ll x,ll len){
ll r=0;
while(len--){r = (r<<1) + (x%2);x = (x>>1);}
return r;
}

void fft(vector<cd> &V,bool invert){
ll n=1,i,j,len,Blen=0;
n=V.size();
j=n-1;
while(j){Blen++;j=(j>>1);}

for(i=0;i<n;++i)if(i<bitR(i,Blen))swap(V[i],V[bitR(i,Blen)]);

for(len=2;len<=n;len=(len<<1)){
    long double ang = 2*PI/len * (invert ? -1 : 1);
    cd wlen(cos(ang),sin(ang));
    for(i=0;i<n;i+=len){
        cd w(1);
        for(j=0;j<len/2;j++){
            cd u = V[i+j],v = V[i+j+len/2]*w;
            V[i+j] = u+v;
            V[i+j+len/2] = u - v;
            w *= wlen;
        }
    }
}
if(invert)for (cd & x: V)x /= n;

}



int main()
{
	ll t,i,j,k,l,n,m,r,a,b,c;
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	
	return 0;
}
