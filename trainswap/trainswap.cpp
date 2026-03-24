#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void array(int a, int b){
    int temp = a;
    a = b;
    b = temp ;
}

int main(){
    int t_case;
    cin >> t_case;
    while (t_case--)
    {
        int small_case, count = 0;
        cin >> small_case;
        int intarray[small_case];
        for(int i = 0; i < small_case; i++){
            cin >> intarray[i];
        }
        for(int i = 0 ; i < small_case; i++)
        {
            for (int j = i + 1; j < small_case; j++)
            {   
                if(intarray[i] > intarray[j]){
                    swap(intarray[i], intarray[j]);
                    count++;
                }
            }
        }        
        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }
    return 0;
}
