#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define tc     \
    ll TC;     \
    cin >> TC; \
    while (TC--)
#define f(i, a, b) for (ll i = a; i < b; i++)
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define pb push_back
#define Max(x, y, z) max(x, max(y, z))
#define Min(x, y, z) min(x, min(y, z))
#define Maax(a, x, y, z) max(a, max(x, max(y, z)))

int main()
{
    ll n, k = 0;
    cin >> n;
    f(i, 0, n - 2)
    {
        k += (i + 1)*(n - 2 - i);
    }
    cout << n*(n + 1) / 2 + k;
}