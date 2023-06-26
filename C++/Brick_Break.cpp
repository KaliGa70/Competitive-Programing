/** @author KaliGa70 -> 
 * 
 - Github: https://github.com/KaliGa70 
 * 
**/

#include <bits/stdc++.h>

using namespace std;
 
int arreglo[200000];

bool comprobarExistencia(int arreglo[]){
	
	
	
}

int main(){
	
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	
	int n, a = 1, b = 0; cin >> n;
	
	for(int i = 0; i < n; ++i) {
		
		cin >> arreglo[i];
		
		if(arreglo[i] == a){a++;}else{b++;}
			
	}
	
	if(b == n){cout << -1 << "\n";}
	else{cout << b << "\n";}
	
	return 0;
	
} 