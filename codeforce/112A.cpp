#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //u can do it, here is the code place
    //just map on the paper first (understand the problem first), so solve
    string fir, sec; cin >> fir >> sec ;
    //convert first string to lowercase 
    for (long unsigned int i = 0; i < fir.size(); i++)
        fir[i] = tolower(fir[i]);
    
    //convert second string to lowercase 
    for (long unsigned int i =0 ; i < sec.size() ; i++)
        sec[i] = tolower(sec[i]);
    
    // compare fir and sec string 
    if (fir == sec )cout << "0\n";
    else if( fir < sec) cout << "-1\n";
    else cout << "1\n";

    return 0;
}