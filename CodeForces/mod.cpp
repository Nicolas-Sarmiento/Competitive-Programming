#include <iostream>
   #include <algorithm>
   #include <array>
   #include <bitset>
   #include <cassert>
   #include <chrono>
   #include <cmath>
   #include <cstdint>
   #include <cstring>
   #include <functional>
   #include <iomanip>
   #include <map>
   #include <numeric>
   #include <queue>
   #include <random>
   #include <set>
   #include <vector>
   #include <string>
   #include <unordered_map>
   #include <unordered_set>
   #include <utility>
   #include <bits/stdc++.h>
 
 
   /*
       TELL ME WHY WE BEEN LOCKED HERE FOREVER
   */    
    
 
 
   using namespace std;
   using namespace chrono;
    
   /* TYPES  */
   #define Today_I_Lost               ios_base::sync_with_stdio(false);
   #define But_I_Believe              cin.tie(NULL);
   #define In_Myself                  cout.tie(NULL);
   #define sz(x)                      ((ll)(x).size())
   #define all(x)                     (x).begin(), (x).end()
   #define nl                         "\n"
   #define fl(i,n)                    for(int i=0;i<n;i++)
   #define pb                         push_back
   #define eb                         emplace_back
   #define yes()                      cout<<"YES"<<nl;
   #define no()                       cout<<"NO"<<nl;
   #define maxv(a)                    *max_element(a.begin(), a.end())
   #define minv(a)                    *min_element(a.begin(), a.end())
   #define ff                         first
   #define ss                         second  
   #define rsort(v)                   sort(v.rbegin(),v.rend())
   #define sum(v)                     accumulate(all(v),0LL)
   #define bits                       __builtin_popcountll
 
 
 
 
   typedef long long ll;
   typedef unsigned long long ull;
   typedef long double lld;
 
   const ll mod = 1e9+7;
 
 
   typedef pair<int,int>    pi;
   typedef pair<ll,ll>      pl;
   typedef vector<int>      vi;
   typedef vector<ll>       vl;
   typedef vector<pi>       vpi;
   typedef vector<pl>       vpl;
 
 
   //taking and giving vectors
   template <typename T>istream& operator>>(istream &input,vector<T>&v){for(auto &i:v) cin>>i;return input;}
   template <typename T>ostream& operator<<(ostream &output,vector<T>&v){for(auto &i:v) cout<<i<<" ";return output;} 
   // printing
   template <typename T> void put(T s){ cout<<s<<'\n';}
   template <typename T> void puts(T s){ cout<<s<<" ";}
 
 
 
   #ifndef ONLINE_JUDGE
   #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
   #else
   #define debug(x)
   #endif
 
   void _print(ll t) {cerr << t;}
   void _print(int t) {cerr << t;}
   void _print(string t) {cerr << t;}
   void _print(char t) {cerr << t;}
   void _print(lld t) {cerr << t;}
   void _print(double t) {cerr << t;}
   void _print(ull t) {cerr << t;}
 
   template <class T, class V> void _print(pair <T, V> p);
   template <class T> void _print(vector <T> v);
   template <class T> void _print(set <T> v);
   template <class T, class V> void _print(map <T, V> v);
   template <class T> void _print(multiset <T> v);
   template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
   template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
   template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
   template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
   template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
 
   // Utility functions
   
   ll gcd(ll a, ll b){if(b==0)return a;return gcd(b,a%b);}
   // ll lcm(ll a, ll b){return (a/gcd(a,b))*b;}
   // ll pow(ll a, ll b) {ll res = 1;while (b > 0) {if (b & 1)res = res * a;a = a * a;b >>= 1;}return res;}
   // ll pow(ll a, ll b, ll m = mod) {a %= m;ll res = 1;while (b > 0) {if (b & 1)res = (res * a ) % m;a = (a * a) % m;b >>= 1;}return res;}
   // ll add(ll a, ll b, ll m = mod){a %= m , b %= m; return (a + b) % m;}
   // ll sub(ll a, ll b, ll m = mod){a %= m , b %= m; return (a - b + m) % m;}
   // ll mul(ll a, ll b, ll m = mod){a %= m , b %= m; return (1ll * a * b) % m;}
   // ll div(ll a, ll b, ll m = mod){a %= m , b %= m; return mul(a , pow(b , m - 2 , m) , m);}
   // ll inver(ll a , ll m = mod){return div(1ll , a , m);}
 
 
 
   // vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = i * i; j <= n; j += i)arr[j] = 1;} return vect;}
 
   // // --------------------SIEVE------------------------------
   // const int N = 1000;
   // vector<bool> is_prime(N + 1, true);
 
   // void sieve() {
   //     is_prime[0]  = false; 
   //     is_prime[1] = true; 
   //     for (int i = 2; i * i <= N; i++) {
   //         if (is_prime[i]) {
   //             for (int j = i * i; j <= N; j += i) {
   //                 is_prime[j] = false;
   //            }
   //         }
   //     }
   // }
   // // -----------------------------------------------------
 
 
 
 
 
 
 
 
 
 
   // bool isPrime(ll n){for(ll i=2; i*i<=n; i++){if(n%i==0) return false;}return n>1;}
   // bool is_this_string_palindrome(string s){ll low=0,high=s.size()-1;while(low<=high){if(s[low++]!=s[high--]){return false;}}return true;}
 
   // bool comp(pair<int,int> &a,pair<int,int> &b){
   //     if(a.ff != b.ff){
   //         return a.ff > b.ff; // "<" for ascending and , ">" for decending
   //     }else{
   //         return a.ss < b.ss;  
   //     }
   // }
    
 
 
 
 
   // ----------prefix sum----------- 
   // vi pre={0};
   // for(auto &it:a) pre.eb(pre.back()+it);
 
 
 
 
  // ------------NCR---------------------------------------
  // const ll N=1e6;
  // ll fact[N];
  
  // void mk(){
  //     fact[0]= 1;
  //     for(int i=1;i<=N;i++){
  //         fact[i] = fact[i-1] * i % M;
  //     }
  // }
 
  // ll nc(ll n,ll r){
  //    if (r > n || r < 0) return 0;
  //    return div(fact[n],mul(fact[n-r],fact[r],M),M)%M;
  // }
  // -------------------------------------------------------
 
 
// void precompute_factorials() {
//     fact[0] = inv_fact[0] = 1;
// 
//     for (int i = 1; i <= MAX_N; ++i) {
//         fact[i] = fact[i - 1] * i % MOD;
//     }
// 
//     inv_fact[MAX_N] = mod_inverse(fact[MAX_N], MOD);
// 
//     for (int i = MAX_N - 1; i >= 1; --i) {
//         inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
//     }
//     
// }
 
// long long comb(int n, int k) {
//     if (k > n || k < 0) return 0;
//     return fact[n] * inv_fact[k] % MOD * inv_fact[n - k] % MOD;
// }
 
 
 
 
// .----------------------------------------------------------.      
// |         LET'S CREATE BEAUTIFUL CHAOS ONCE MORE (:        |
// .----------------------------------------------------------.           
 
 
 
   void Dopamine(){
         
         int x,y;
         cin>>x>>y;
         vi a(4);
         a[x]=1;
         a[y]=1;
         for(int i=1;i<4;i++){
            if(a[i]==0){
                put(i);break;
            }
         }
        
 }
 
 
 
   signed main(){
       
       Today_I_Lost But_I_Believe In_Myself
 
       #ifndef ONLINE_JUDGE
           freopen("Error.txt", "w", stderr);
       #endif
        
       int tc =1;
       // cin >> tc;
       for (int t = 1; t <= tc; t++) Dopamine(); 
 
       return 0;
   }     