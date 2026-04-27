#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //u can do it, here is the code place
    //just map on the paper first (understand the problem first), so solve
    int a , b ; cin >> a >> b;
    if (a > b) swap(a ,b);
    for (int i = 1; i <= 10 ; i++){
        a *= 3; b *=2;
        if (a > b){
            cout << i << endl;
            break;
        }
    }
    return 0;
}