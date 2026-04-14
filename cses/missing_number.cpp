#include <bits/stdc++.h>

using namespace std;
#define ll long long 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //u can do it, here is the code place
    //just map on the paper first (understand the problem first), so solve
    ll t;
    cin >> t;
    vector<bool> vis(t+1);
    //input to the array check every interger is visited
    for(int i = 0; i < t-1; i++){
        int x; 
        cin >> x;
        vis[x] = true;
    }
    //find if the number is not visited print out 
    for(int x = 1 ; x <= t ; x++){
        if(!vis[x]){
            cout << x << "\n";
            return 0;
        }
    }  
}