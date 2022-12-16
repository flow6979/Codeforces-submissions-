#include <bits/stdc++.h>
#define pb    push_back
#define ppb   pop_back
#define pf    push_front
#define ppf   pop_front
#define ll    long long int
#define tc     ll TC; cin >> TC; while (TC--)
#define vwv      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define f(i,a,b)           for(ll i=a;i<b;i++)
#define fa(z) for(auto &value : z)                                       //pls use this
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define ff first
#define ss second 
#define it(v) auto::iterator it = v.begin()
#define cinvpii(p) int a,b; cin>>a>>b; p.push_back(make_pair(a,b))
#define cinvpll(p) long long int a,b; cin>>a>>b; p.push_back(make_pair(a,b))
#define asc(v)             sort(v.begin(), v.end())                     //vectors,pairs,tuples,string
#define dsc(v)             sort(v.begin(), v.end(), greater<int>())
#define des(v)             sort(v.begin(), v.end(), sortbysec);       //for pairs
#define Max(x, y, z)       max(x, max(y, z))
#define Min(x, y, z)       min(x, min(y, z))
#define Maax(a,x, y, z)    max(a, max(x, max(y, z)))
#define mod 1000000007
#define rota(v,rotL)        rotate(v.begin(), v.begin()+rotL, v.end());    //rotating vector v at position rotL rightward
ll n,m,x,a,b,c,d,cnt,fg;
 
using namespace std;
 
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}                //pairs des

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

// Maths
ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
ll power(ll a, ll b, ll MOD) {ll ans = 1; while (b != 0) {if (b & 1)ans = (ans * a) % MOD; a = (a * a) % MOD; b = b / 2;} return ans;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll countDigit(long long n){ll count = 0;while (n != 0){n = n / 10; ++count;}return count;}
ll removeZero(ll n){ll q=0,r;while(n > 0){r = n % 10;n = n / 10;if(r!=0){q = q*10 + r;}}n = q;q= 0;while(n>0){r = n % 10;n = n / 10;q= q*10 + r;}return q;}

//mod
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//string
ll getInt(string s){string g=""; f(i,0,s.size()){if(s[i]>=48 && s[i]<=57)g+=s[i];} stringstream sst(g); ll x = 0; sst >> x; return x;}
string toUpperCase(string s){string k="";for(int i=0;i<s.size();i++){k+=char((s[i]&'_'));}return k;} 
string toLowerCase(string s){string k="";for(int i=0;i<s.size();i++){k+=char((s[i]|' '));}return k;} 

// operations
vi removeDuplicate(vi v){  vi::iterator ip;ip = std::unique(v.begin(), v.begin() + 12);v.resize(std::distance(v.begin(), ip));return v;}   //sort and find vec with unique elements

int main(){
    tc{
        ll n;
        cin>>n;
        
        if(n>19){cout<<"NO"<<endl;}
        else{vl v;
            cout<<"YES"<<endl;
            f(i,0,n){v.pb(pow(3,i));}
            f(i,0,n){cout<<v[i]<<" ";}
            cout<<endl;}
    }
}