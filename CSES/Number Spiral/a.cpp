#include <bits/stdc++.h>
#define fast_io ios_base :: sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define ar array 
using namespace std;

void init_code() {
fast_io;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 
}
const int mx = 2e5;
//ll n;
 int  a[mx];
//int n , m , k ;
//int a[mx], b[mx];

int main(){
	init_code();
    int t ; cin >> t; 
    while(t--){
        
        int n = 1;
        int a , b, c, d;
        while(n<8){
            int x ; cin>>x;
            if(n==1) a = x;
            if(n==2) b = x;
            if(n == 3) c =x;
            if(n ==4) d = x;

            if(n<3)cout<< x << " ";
            //if(n==3 && a+b != c) cout<< c << " ";
            if(n==4 && a+b !=c) cout<< c << " ";
            else if(n==4) cout<< d << " ";
            n++;
        }
        cout<<"\n";

    }
   return 0;
    }
    
