#include <bits/stdc++.h>

#define lui long unsigned int

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //u can do it, here is the code place
    //just map on the paper first (understand the problem first), so solve
    string str ; cin >> str;
    string digit = "";
    //for each char in string if digit save to digit string  
    for (char ch : str){
        if(isdigit(ch)) digit += ch;
    }

    //sort string 
    sort(digit.begin(),digit.end());
    
    //out string 
    for (lui i = 0 ; i < digit.length() ; i++){
        cout << digit[i];
        //it not digit cout "+"
        if (i != digit.length()-1) cout << '+';
    }
    cout << endl;

    return 0;
}