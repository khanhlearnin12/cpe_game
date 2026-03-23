#include <bits/stdc++.h>
using namespace std;
int main(){
    int t_case;
    cin >> t_case;
    for (int i = 0; i < t_case; i++)
    {
        int frist_num, last_num;
        int result = 0;
        cin >> frist_num >> last_num;
        for (int i = frist_num; i <= last_num; i++)
        {
            if(i % 2 != 0){
                result += i;
            }
        }
        cout << "Case " << i+1 << ": " << result << endl;
    }
    return 0;
}