#include <bits/stdc++.h>
#define pb    push_back
#define ppb   pop_back
#define pf    push_front
#define ppf   pop_front
#define ll    long long int
#define tc ll TC; cin >> TC; while (TC--)
#define vwv      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define f(i,a,b)           for(ll i=a;i<b;i++)
#define pii                pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vl vector<ll>
#define vpll vector<pll>
#define asc(v)             sort(v.begin(), v.end())
#define dsc(v)             sort(v.begin(), v.end(), greater<int>())
#define Max(x, y, z)       max(x, max(y, z))
#define Min(x, y, z)       min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))
#define mod 1000000007
ll n,m,x,a,b,c,d,cnt,fg;
 
using namespace std;
 
ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
bool isPrime(ll n) {if (n <= 1)return false; for (int i = 2; i < n; i++)if (n % i == 0)return false; return true;}
ll power(ll a, ll b, ll MOD) {ll ans = 1; while (b != 0) {if (b & 1)ans = (ans * a) % MOD; a = (a * a) % MOD; b = b / 2;} return ans;}
 
 
int main(){
    vwv
    int k=0;
    string v,s;
    cin>>v;
    s=v;
    for (int i = 1; i < v.size(); i++){if(isupper(v[i])){k++;}}
    
    if(k==v.size()-1){
        if(isupper(v[0])){v[0]=tolower(v[0]);}
        else{v[0]=toupper(v[0]);}
    for (int i = 1; i < v.size(); i++)
        {if (v[i] >= 'A' && v[i] <= 'Z'){v[i] += 32;}}
     cout<<v;}
    else cout<<s;
}