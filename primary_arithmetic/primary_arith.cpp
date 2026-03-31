#include <iostream>

using namespace std;

int main(){
    int fnum, lnum;

    while(cin >> fnum >> lnum){
        //if 0 0 will stop
        if (fnum == 0 && lnum == 0){
            break;
        }
        //if another  number will start break an calculate
        int count = 0;
        int carry = 0;

        while (fnum > 0 || lnum > 0){
            int digits1 = fnum % 10;
            int digits2 = lnum % 10;
            
            int sum = digits1 + digits2 + carry;

            if (sum >= 10) {
                count++;
                carry = 1;
            }else carry = 0;

            fnum /= 10;
            lnum /= 10;
        }
        // output 
        if (count == 0) cout << "No carry operation.\n";
        else if (count == 1) cout << "1 carry operation.\n";
        else cout << count << " carry operations.\n";
    } 
    return 0;
}