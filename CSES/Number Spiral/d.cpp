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
int x, n;

int main(){

	init_code();
   cin>>x >> n;
   set<ar<int,2>> s;
   multiset<int> res;
   s.insert({x,0});
   res.insert(x);
   int p ;
   while(cin>>p){
     auto it = s.lower_bound({p,0});
     int l = (*it)[0];
     int r = (*it)[1];
     //cout<< "l: " << l << " " << "r:" << r << endl<< endl;

     int temp = l - r;
     //cout<< "temp: " << temp << endl;
     //cout<< temp << endl;

     int a = p-r;
     int b = l-p;
     //cout<< "a: " << a << " " << "b:" << b << endl;

     s.erase(it);

     s.insert({l, p});
     s.insert({p, r});
     
     auto itr = res.find(temp);

     res.erase(itr);

     res.insert(a);
     res.insert(b);

     auto t = res.end();
     --t;
     cout<< (*t) << " ";
   }

   return 0;
    }
    
