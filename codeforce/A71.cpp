#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    while (n--){
        string word;
        cin >> word; 
        if (word.length() <= 10) cout << word;
        else {
            cout << word[0]; //start word always 0
            int mid_len = word.length() -2;
            cout << mid_len;
            cout << word[word.length() - 1];
        }
        cout << endl;
    }
    return 0;
}