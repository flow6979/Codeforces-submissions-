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
#define vit vector<int>::iterator it = v.begin()
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define ff first
#define ss second 
#define cinvpii(p) int a,b; cin>>a>>b; p.push_back(make_pair(a,b));
#define cinvpll(p) long long int a,b; cin>>a>>b; p.push_back(make_pair(a,b));
#define asc(v)             sort(v.begin(), v.end())
#define dsc(v)             sort(v.begin(), v.end(), greater<int>())
#define des(v)             sort(v.begin(), v.end(), sortbysec);       //for pairs
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
ll countDigit(long long n){ll count = 0;while (n != 0){n = n / 10; ++count;}return count;}
int removeZero(ll n){ll q=0,r;while(n > 0){r = n % 10;n = n / 10;if(r!=0){q = q*10 + r;}}n = q;q= 0;while(n>0){r = n % 10;n = n / 10;q= q*10 + r;}return q;}

int main(){
    int n,r=0,t=0,q,w,g=0;
    cin>>n;
    ll a[n];
    vl v;
    f(i,0,n){cin>>a[i];}
    f(i,0,n-1){if(a[i+1]>=a[i])r++;}
    f(i,0,n-1){if(a[i+1]<a[i])t++;}
    if(r==n-1){cout<<"yes"<<endl<<1<<" "<<1;}
    else if(t==n-1){cout<<"yes"<<endl<<1<<" "<<n;}
    else{
        w=n-1;
        f(i,0,n-1){if(a[i+1]<a[i]){q=i;break;}}
        f(i,q,n-1){if(a[i+1]>a[i]){w=i;break;}}
        // cout<<q<<" "<<w;
        f(i,0,q){v.pb(a[i]);}
        f(i,q,w+1){v.pb(a[w+q-i]);}
        f(i,w+1,n){v.pb(a[i]);}
        f(i,0,n-1){if(v[i+1]>=v[i])g++;}
        if(g==n-1){cout<<"yes"<<endl<<q+1<<" "<<w+1;}
        else cout<<"no";
    }
}