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
//int n , m , k ;
//int a[mx], b[mx];

int main(){

	init_code();
   cin>>n;

   for(int i=0; i< n; i++){
      cin>> a[i];

   }

   map<int, int> res;
   int i= 0, j= -1, ans =-1;

   while(j< n){
      j++;
      res[a[j]]++;
       if(j < n && (int)res.size() == j-i+1) {ans=max(ans, (int)res.size()); continue;}
  
       else if( i<=j &&  j< n && (int)res.size() < j-i+1){

         res[a[i]]--;
         if(res[a[i]] == 0 ) res.erase(a[i]);
         i++;
      }
   }

 // for(auto &x : res) cout<< x.first << " " << x.second << " ";
 //   cout<< endl;
   cout<< ans;
   return 0;
    }
    
