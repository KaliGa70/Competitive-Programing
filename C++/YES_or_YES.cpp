/** @author KaliGa70 -> 
 * 
 - Github: https://github.com/KaliGa70 
 * 
**/

#define wii int i = 0; i < n; i++

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	
	int n; cin >> n;
	string s;
	
	for(wii) {
	
		cin >> s;
		
		if((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's')){cout << "YES"<<"\n";} else cout << "NO"<<"\n";
		
	
	}
	
	return 0;
	
} 