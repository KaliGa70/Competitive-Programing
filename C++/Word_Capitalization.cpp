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
	
	string s;
	
	cin >> s;
		
	if(s[0] >= 65 && s[0] <= 90){cout << s;} else { s[0] = toupper(s[0]); cout << s;}
	
	return 0;
	
} 