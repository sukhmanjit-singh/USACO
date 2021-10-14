/*
ID: sukhman1
LANG: C++11
PROB: friday
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
int check_leap(int n){
    if(n%400==0){
        return 1;
    }
    if(n%100==0){
        return 0;
    }
    if(n%4==0){
        return 1;
    }
    return 0;
}
void solve(){
    freopen("friday.in","r",stdin); 
	freopen("friday.out","w",stdout);
    ll year;
    cin>>year;
    ll no_months=12;
    ll days[12];
    forn(i,no_months){
        days[i]=31;
    }
    days[1]=28;
    days[8]=30;
    days[3]=30;
    days[5]=30;
    days[10]=30;
    ll weak[7];
    memset(weak,0,sizeof(weak));
    ll curr=-1;
    forsn(i,1900,1900+year){
        if(check_leap(i)==1){
            days[1]=29;
        }
        else{
            days[1]=28;
        }
        forn(j,no_months){
            forn(k,days[j]){
                curr++;
                if(k==12){
                    weak[curr%7]++;
                }
            }
        }
    }
    forsn(j,5,12){
        if(j%7!=4)
            cout<<weak[j%7]<<" ";
        else{
            cout<<weak[j%7];
        }
    }
    cout<<"\n";
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
