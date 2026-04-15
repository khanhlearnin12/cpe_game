#include <bits/stdc++.h>

using namespace std;

int main(){
	// understand problem more importants
	int m ,n, result; cin >> m >> n ;
	if (m > n)
		swap(m,n);
	
	result =  m * n;
	int max_of_domino_part = result /2 ;

	cout << max_of_domino_part << endl;

	return 0;
}