#include <bits/stdc++.h>

using namespace std;

#define ll long long 


int main ( ){
	ll t; cin >> t;
	vector<bool> vis(t+1);
	for (int i = 0; i < t-1 ;i++){
	 	int x;
	 	cin >> x;
	 	vis[x] = true;
	}
	 for (int x = 1; x <= t; x++){
	 	if(!vis[x]){
	 		cout << x << "\n";
	 		return 0;		
	 	}
	}
}