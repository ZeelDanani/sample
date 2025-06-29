#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define lld long long double
using namespace std;
using namespace __gnu_pbds;
#define Zeel ios_base::sync_with_stdio(false); cin.tie(NULL);
#define Danani cout.tie(NULL);
// ordered_set<type> os --> os.order_of_key(X)   *os.find_by_order(X)
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define VIVA /*Live*/
#define LA /*Long*/
#define VIDA /*King*/
#define f(i,l,r) for(ll i = l; i < r; i++)
#define fr(i,r,l) for(ll i=r;i>=l;i--)
#define all(x) x.begin(),x.end()
#define in(n) ll n;cin>>n;
#define inarr(arr,n) vector<ll> arr(n);for(ll i=0;i<n;i++)cin>>arr[i];
#define instr(n) string n;cin>>n;
#define yy cout<<"YES"<<endl;
#define nn cout<<"NO"<<endl;
#define pb push_back
#define print(v)for(auto x:v)cout<<x<<' ';cout<<endl;
#define instr(n) string n;cin>>n;
#define ff first
#define ss second
const ll mod = 1e9+7;
const ll inf = LLONG_MAX;
ll sub(ll a, ll b) { a = a % mod; b = b % mod; return (((a - b) % mod) + mod) % mod; }
ll add(ll a, ll b) { return (a % mod + b % mod) % mod; }
ll mult(ll a, ll b) { return ((a % mod) * (b % mod)) % mod; }
ll power(ll x, ll y) { ll ans = 1; while (y > 0) { if (y & 1) { ans = ans * x; ans %= mod; } y = y >> 1; x = x * x; x %= mod; } return ans % mod; }
ll modInv(ll n, ll p) { return power(n, p - 2); }
ll modInv(ll n) { return power(n, mod - 2); }
ll fact(ll n) { if (n == 0) return 1; return mult(n, fact(n - 1)); }
ll nCr(ll n, ll r) { if (r == 0) return 1; return (fact(n) * modInv(fact(r), mod) % mod * modInv(fact(n - r), mod) % mod) % mod; }
ll gcd(ll a, ll b){ while (b != 0) { ll temp = b; b = a % b; a = temp; } return a; }

// ll N = 5e5 + 1;
// vector<ll>factorial(N,1),invf(N);

void init(){
    // f(i,2,N){
    //     factorial[i] = (factorial[i-1]*i)%mod;
    // }
    // f(i,0,N){
    //     invf[i] = modInv(factorial[i],mod);
    // }
}


void solve(){
    cout<<"CAN I GET THAT PINEAPPLE"<<endl;
    return;
}

int main(){

    Zeel Danani

    init();

    ll t;
    cin>>t;
    while(t--){
        solve();
    }

    VIVA LA VIDA
    return 0;
}