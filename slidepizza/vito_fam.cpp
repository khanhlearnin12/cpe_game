#include <iostream> 
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        int house;
        cin >> house;
        vector<int> house_cumulate;
        for (int i = 0; i < house; i++){
            int x;
            cin >> x;
            house_cumulate.push_back(x);
        }
        
        sort(house_cumulate.begin(), house_cumulate.end());
         
        int median = house_cumulate[house / 2];

        int result = 0 ;
        for (int i = 0; i < house ; i++)
        {
            result += abs(house_cumulate[i] - median);
        }
        cout << result << endl;
    }
    return 0;
}

/*
approach way 
find the sorted way to relative house 
so we should use abs(frist_house - median(the closest house))
ideas : 
    input cases
    each case input house, number_of_houses_distence ;
    we create the median things to find the closest house to go to 
    for each house distence we going to sum up that.
*/