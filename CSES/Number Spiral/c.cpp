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
int n,  a[mx];

int main(){

	init_code();
   cin>> n;
   int x  ;
   multiset<int> res;
   while(cin>>x ){
      auto it = res.upper_bound(x);
      if(it == res.end()) res.insert(x);
      else{
        res.erase(it);
        res.insert(x);
      }
   }
   cout<< (int)res.size();
   return 0;
    }
    
