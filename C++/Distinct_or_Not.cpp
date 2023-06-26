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

    int n; cin >> n;

    map <int, int> mapita;
    
    bool check = false;


    for(int i = 0; i < n; i++){
		int dato; cin >> dato;
		mapita[dato]++;
		
        if(mapita[dato] == 2) check = true;

    }
    
    if(check == true){
	 
        cout << "NO\n";

	} else {
	
	    cout << "YES\n";
	
	}

}