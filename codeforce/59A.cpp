#include <bits/stdc++.h>

#define lui long unsigned int  
#define ll long long 
using namespace std;

void uper(string word){
    for(lui i = 0 ; i < word.size(); i++)
        word[i] = toupper(word[i]);
    cout << word << endl;
}

void low(string word){
    for(lui i = 0 ; i < word.size(); i++)
        word[i] = tolower(word[i]);
    cout << word << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //u can do it, here is the code place
    //just map on the paper first (understand the problem first), so solve
    string word; cin >> word;
    string chubandau = word;
    for(lui i = 0 ; i < word.size() ; i++)
        word[i] = toupper(word[i]);

    ll count = 0;
    //dem nhuwngx chu lown 
    for (lui i = 0 ; i < word.size(); i++){
        if(chubandau[i] == word[i]) count++;
    }
    // neu ma low nhieu hown thio bien chu nho
    ll lowword = word.size() - count ;
    if (lowword > count) low(word);
    else if (lowword == count) low(word);
    else uper(word);    
    return 0;
}