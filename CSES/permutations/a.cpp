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
    int n ;
    cin >> n;
    if(n == 1) {cout<< "1"; return 0;}
    if(n==2 || n == 3){ cout<< "NO SOLUTION"; return 0;}
    for(int i = n-1; i>0 ; i= i-2){
        cout<< i << " ";

    }
    for(int i = n ; i>0; i= i-2){
        cout<< i  << " ";

    }
	return 0;
    }
    
