#include<bits/stdc++.h>

using namespace std;

int main() {
   //u can do it, code go here
   //read the focus on data more than on the algo
    int n, k ;
    cin >> n >> k;
    if (n < k) swap(n,k);
    int i = 1 , count = 0, arr[n];
    while(i < n-1){
        cin >> arr[i];
        if (arr[i] > k) count++;
        i++;
    }
    cout << count << endl;
    return 0;
}