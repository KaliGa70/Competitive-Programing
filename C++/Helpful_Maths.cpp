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
	
	string s;
	cin>>s;
	
	vector<char> arreglo;
    
    for(int i=0; i < s.size(); i+=2){
    
        arreglo.push_back(s[i]);
        
    }
    
    sort(arreglo.begin(), arreglo.end());

        int ultimo = arreglo.size()-1;
        
        for(int i=0; i < arreglo.size()-1; i++){
    
            cout<<arreglo[i]<<'+';
    
        }
    
    cout << arreglo[ultimo]<<endl;

	return 0;
	
} 