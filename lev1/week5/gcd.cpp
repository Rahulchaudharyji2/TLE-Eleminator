#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n"
#define ff first
#define ss second
#define mee cout << "me" << "\n";
#define all(x) x.begin(), x.end()
#define Ceil(x,y) ((x+y-1)/y)
#define debug(x) cout << #x << " - " << x << "\n";
#define FL45H ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define TIME cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#define bufpb cin.ignore(numeric_limits<streamsize>::max(), '\n');

const int MOD = 1e9 + 7;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

ll super_power(ll base, ll power) {
    ll res = 1;
    while (power > 0) {
        if (power & 1) res = res * base;
        power >>= 1;
        base = base * base;
    }
    return res;
}

template <typename T>
void printVec(vector<T> v) {
    for (auto val : v) {
        cout << val << " ";
    }
    cout << endl;
}

void solve() {
   int n;
        cin >> n;
 
        long long a = 2;
 
        while (gcd(a, (long long)n - 1) != 1) {
            a++;
        }
 
        long long b = n - 1 - a;
        long long c = 1;
 
        cout << a << " " << b << " " << c << endl;
}

int main() {
    FL45H
    // TIME
    int T ;
    cin >> T;
    while (T--) {
        solve();
    }
    // TIME
    return 0;
}

/* Stuff to look for:
   - Constraints
   - Integer overflow, array bounds
   - Special cases, corner cases
   - Dry run
   - Write stuff down
   - Don't get stuck on one approach
   - sort() - O(N*log(N))
*/