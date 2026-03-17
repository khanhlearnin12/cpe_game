#include <bits/stdc++.h>
using namespace std;    

int main(){
    while(1){      
        string user_input;
        int count = 0;
        while(getline(cin, user_input)){
            string result = "";
            for(int i = 0; i <= user_input.length() -1; i++){
                if(user_input[i] == '"'){
                    count++;
                    //" for string and ' for character 
                    if (count % 2 == 0) result += "''";
                    else result += "``";
                }
                else{
                    result += user_input[i];
                }
            }
            cout << result << endl;
        } 
        //after print out all of the output 
        return 0;  
    }
}
