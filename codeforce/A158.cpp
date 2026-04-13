#include<bits/stdc++.h>

using namespace std;

int main() {
   //u can do it, code go here
   //read the focus on data more than on the algo
    int n, k ;
    cin >> n >> k;
    vector<int> arr(n); //khai báo vector với n phần tử dùng cho dinamic array
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    int count = 0;
    int last = arr[k - 1]; //
    for (int i = 0; i < n ; i++) 
        if(arr[i] >= last && arr[i] > 0 ) count++; // 
    cout << count << endl;
    return 0;
}