#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //u can do it, here is the code place
    //just map on the paper first (understand the problem first), so solve
    string in; cin >> in; 
    set <char> m;
    
    for (long unsigned int i = 0; i < in.size() ; i++)
        in[i] = tolower(in[i]);

    for (long unsigned int i = 0 ; i < in.size() ; i++)
        m.insert(in[i]);

        
    if (m.size() % 2 != 0) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";

    return 0;
}