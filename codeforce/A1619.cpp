#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        string word;
        cin >> word;
        int len = word.length();
        if (len % 2 != 0) cout << "NO\n";
        else{
            int mid = len /2;
            if(word.substr(0 , mid) == word.substr(mid , mid)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}