/*
ID: sukhman1
LANG: C++11
PROB: gift1
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD =  2000000011;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
// void init_code(){
//     fast_cin();
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif // ONLINE_JUDGE
// }
void solve(){
    freopen("gift1.in","r",stdin); 
	freopen("gift1.out","w",stdout);
    int n;
    cin>>n;
    map<string,int>m;
    string arr[n];
    forn(i,n){
        string s;
        cin>>s;
        arr[i]=s;
        m[s]=0;
    }
    forn(i,n){
        string s;
        cin>>s;
        int val,div;
        cin>>val>>div;
        int get=0,keep=0;
        if(div!=0){
            get=val/div;
            keep=val%div;
        }
        m[s]-=val;
        forn(j,div){
            string name;
            cin>>name;
            m[name]+=get;
        }
        m[s]+=keep;
    }
    forn(i,n){
        cout<<arr[i]<<" "<<m[arr[i]]<<"\n";
    }
}
int main()
{
    ll t=1;
    // cin >> t;
    for(int it=1;it<=t;it++) {
    //  cout << "Case #" << it << ": ";
        solve();
    }
    return 0;
}