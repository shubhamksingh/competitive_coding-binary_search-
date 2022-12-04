#include <bits/stdc++.h>
using namespace std;



int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(ios::badbit | ios::failbit);
	auto __solve_tc = [&](auto __tc_num)->int{
		string s;
		cin >> s;
		int n = (int)s.size();
		array<vector<int>, 26> pos;
		array<int, 26> cnt{};

		for(auto i = 0; i < n; ++ i){
			auto c = s[i];
			++ cnt[c - 'a'];
			pos[c - 'a'].push_back(i);
		}


		if(*max_element(cnt.begin(), cnt.end()) * 2 > n){
			cout << "IMPOSSIBLE\n";
			return 0;
		}

		vector<int> a;
		for(auto t: pos){
			a.insert(a.end(), t.begin(), t.end());
		}
		string res(n, '?');
		for(auto i = 0; i < n; ++ i){
			res[a[i]] = s[a[(i + n / 2) % n]];
		}
		cout << res << "\n";
		return 0;
	};
	int __tc_cnt;
	cin >> __tc_cnt;
	for(auto __tc_num = 0; __tc_num < __tc_cnt; ++ __tc_num){
		cout << "Case #" << __tc_num + 1 << ": ";
		__solve_tc(__tc_num);
	}
	return 0;
}

/*

*/

////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
//                                   Coded by Aeren                                   //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////