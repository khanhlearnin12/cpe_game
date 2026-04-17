#include <bits/stdc++.h>


using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //u can do it, here is the code place
    //just map on the paper first (understand the problem first), so solve

    vector<vector<int>> matrix(25, vector<int>(25)); //tạo matrix

    for (int i = 0; i < 5; i++){ 
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int curx =0 , cury =0;
    for (int i = 0; i < 5; i++){ 
        for (int j = 0; j < 5; j++)
        {
            if(matrix[i][j] == 1){ 
                curx = i; 
                cury = j;
                break;
            }
        }
    }
    int ans = abs(curx -2)+ abs(cury -2);
    cout << ans << endl;
    return 0;
}

/*
//approach method
input matrix 
check 1 position 
    save 1[i][j] position
    as curx = i , cury = j;
bc i == 2 j == 2 is the beautifull matrix 
so swap_result = abs(curx-2)+abs(cury -2)
output swap_result
*/