#include <iostream>
#include <set>

using namespace std;

int main(){
    int T , Case = 1;
    long long N , tmp;
    cin >> T;
    while(T--){
        cin >> N;
        cout << "Case #" << Case++ <<": "<< N;
        set<long long>st;
        while (N != 1){
            if(st.count(N)){ // trường hợp có số lập lại
                break;
            }
            st.insert(N);
            tmp = 0;
            //big case break to each digits and multiply it 
            while(N >= 10){
                tmp += (N % 10) * (N % 10);
                N /= 10;  
            }
            //digits case just multiply it directly 
            tmp += N*N;
            N = tmp;
        }
        if(N ==1 ) cout << " is a Happy number.\n";
        else cout << " is an Unhappy number.\n";
    }
    return 0;
}

/*
Happy number là sau nhiều bước biến đổi và kết quả lại quay về một 
Unhappy number là sau nhiều bước biến đổi và không quay lại một 
theo như đề nói thì sum của square digits là n^2 nhưng ta có thể dùng n*n 
*/