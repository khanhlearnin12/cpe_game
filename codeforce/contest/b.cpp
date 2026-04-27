#include <bits/stdc++.h>

#define ll long long 
#define lui long unsigned int 

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //u can do it, here is the code place
    //just map on the paper first (understand the problem first), so solve
    ll t; cin >> t;
    while(t--){
        string s ;cin >> s;
        for(lui i = 0 ; i < s.size() ; i++)
            s[i] = tolower(s[i]);
        string s1, s2;
        for (lui i = 0 ; i < s.size(); i++){
            if (s[i] != s[i+1]) 
                cout << "YES\n";
            else {
                s1 = s.substr(1,4);
                if (s1[i] != s1[i+1]) cout << "YES\n";
                else cout << "NO\n";
            }
            break;
        }
    }
    return 0;
}