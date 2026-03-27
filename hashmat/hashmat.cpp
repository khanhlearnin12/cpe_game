#include <iostream>

using namespace std;

int main(){
    long long fnum, lnum, tmp = 0;
    long long result;
    while(cin >> fnum >> lnum){
        if(fnum > lnum){
            tmp = fnum;
            fnum = lnum;
            lnum = tmp;

            result = lnum - fnum;
        }
        result = lnum  - fnum;
        cout << result << endl;
    }
    return 0;
}