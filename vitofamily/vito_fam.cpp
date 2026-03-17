#include <iostream>

using namespace std;
#define house_length 30000 

int main(){
    int number_case ;
    cin >> number_case;
    int result, save_result = 0;
    //test thru each case 
    for (int i = 0 ; i < number_case ; i++){ 
        int house_number, house_num[house_length]; 
        cin >> house_number;
        //input data 
        for (int i = 0 ; i < house_number; i++){
            cin >> house_num[i];
        }
       //back - font = result and result + the previous result  
        for (int i = 0 ; i < house_number; i++){
            for (int j = i+1; j < house_number; j++) {
                result = house_num[j] - house_num[i];
                save_result += result; 
            }
        }
        cout << save_result << endl;
    }
    return 0;
}
