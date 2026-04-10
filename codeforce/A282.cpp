#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, count = 0;
    cin >> t;
    while(t--) {
        string word;
        cin >> word;
        int len = word.length();
        int i = 0;
        while (i < len) {
            int j = i +1; 
            if (word[i] == '+' && word[j] == '+') count++;
            else if (word[i] == '-' && word[j] == '-') count--;
            i++;
        }
    }
    cout << count;
    return 0;
}