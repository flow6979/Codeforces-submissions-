#include <bits/stdc++.h>
#define pb    push_back
#define ppb   pop_back
#define pf    push_front
#define ppf   pop_front
#define ll    long long int
#define tc ll TC; cin >> TC; while (TC--)
#define vwv      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define f(i,a,b)           for(ll i=a;i<b;i++)
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vl vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define pii pair<int,int>
#define pll pair<ll, ll>
#define ff first
#define ss second 
#define asc(v)             sort(v.begin(), v.end())
#define dsc(v)             sort(v.begin(), v.end(), greater<int>())
#define Max(x, y, z)       max(x, max(y, z))
#define Min(x, y, z)       min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))
#define mod 1000000007
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
#define pfl(x)              printf("%lld\n",x)
ll n,m,x,a,b,c,d,cnt,fg;
 
using namespace std;
 
ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
bool isPrime(ll n) {if (n <= 1)return false; for (int i = 2; i < n; i++)if (n % i == 0)return false; return true;}
ll power(ll a, ll b, ll MOD) {ll ans = 1; while (b != 0) {if (b & 1)ans = (ans * a) % MOD; a = (a * a) % MOD; b = b / 2;} return ans;}
 

int main(){
    tc{
        int n,k=0,r=0,g=0;
        cin>>n;
        int v[4*n];
        f(i,0,4*n){cin>>v[i];}
        sort(v,v+4*n);
        f(i,0,2*n){if(v[2*i]==v[2*i+1])k++;}
        if(k!=2*n){cout<<"NO"<<endl;}
        else{
            f(i,0,n){if(v[2*i]*v[4*n-2*i-1]==v[0]*v[4*n-1])g++;}
            if(g==n){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
    }
}