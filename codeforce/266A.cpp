#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //u can do it, here is the code place
    //just map on the paper first (understand the problem first), so solve
    int n, count =0 ; cin >> n;
    string s ; cin >> s ;
    for (long unsigned int i = 0 ; i < s.size() ; i++)
        if (s[i] == s[i+1]) count++;
    cout << count << endl;
    return 0;
}