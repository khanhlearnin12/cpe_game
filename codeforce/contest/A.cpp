#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //u can do it, here is the code place
    //just map on the paper first (understand the problem first), so solve
    int t; cin >> t;
    while(t--){
        int n ; cin >> n;
        bool has_100 = false ;

        for (int i = 0 ; i < n; i++){
            int a ; cin >> a;
            if (a == 100) has_100 = true;
        }
        if (has_100) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}