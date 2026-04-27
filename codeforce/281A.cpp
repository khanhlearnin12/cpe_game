#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //u can do it, here is the code place
    //just map on the paper first (understand the problem first), so solve
    string word; cin >> word;
    word[0] = toupper(word[0]);
    cout << word[0] << word.substr(1,word.length()-1) << endl;

    return 0;
}