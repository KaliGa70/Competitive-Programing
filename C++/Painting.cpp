/** @author KaliGa70 -> 
 * 
 - Github: https://github.com/KaliGa70 
 * 
**/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	
	int h, w, n;
	
	cin >> h >> w >> n;
	
	int tmp = 0;
	
	while(n > 0) {
		
		if(h > w){n-=h;tmp++;}else{n-=w;tmp++;}
	}
	
	cout << tmp;
	
} 