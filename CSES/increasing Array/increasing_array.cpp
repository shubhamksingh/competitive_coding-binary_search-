#include <bits/stdc++.h>
#define fast_io ios_base :: sync_with_stdio(false); cin.tie(NULL)
#define ll long long  
using namespace std;

void init_code() {
fast_io;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 
}

int main(){

	init_code();
    ll n ; cin >> n;
    ll mx=0;
    ll ans = 0 ; 
    while(n--){
        ll x ; cin >> x;
        mx = max(mx, x );
        ans += mx -x ;

    }
    cout<< ans;
	return 0;
    }
    
