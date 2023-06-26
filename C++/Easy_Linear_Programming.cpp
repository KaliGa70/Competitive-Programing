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
	
	int a, b, c, k;
	
	cin >> a >> b >> c >> k;
	
	int sumaMax = 0;
	
	if(k > a){k-=a; sumaMax+=a; k -= b; while(k > 0){ k--; c--; sumaMax--;} cout << sumaMax << "\n";}
	else {cout << k << "\n";}
	
	return 0;
	
} 