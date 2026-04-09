#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int t_case;
    cin >> t_case;
    while (t_case--){
      string word;
      cin >> word;
      int n = word.size();
      if(n % 2 != 0) cout << "NO\n";
      else{
        int mid = n / 2;
        if (word.substr(0,mid) == word.substr(mid, mid)) cout << "YES\n";
        else cout << "NO\n";
      }
    }
}