/** @author KaliGa70 -> 
 * 
 - Github: https://github.com/KaliGa70
 * 
**/

#include <bits/stdc++.h>

/*============================================================================*/

#define kaliga70 '\n'
#define yes cout << "YES" << kaliga70;
#define no cout << "NO" << kaliga70;
#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

/*============================================================================*/

typedef long long ll;
typedef double dd;
typedef long long int lli;
typedef unsigned long long ull;

/*============================================================================*/

using namespace std;

/*============================================================================*/



/*============================================================================*/

int main(){_

    ll contador = 0;
	int n; cin >> n;
	map<string, ll> mapita;
	
	for(int i = 0; i < n; i++) {
		
		string s;
		cin >> s;
		
		sort(s.begin(), s.end());
		
		mapita[s]++;
		
	}
	
    for (auto map : mapita) {
        
        ll tmp = map.second;
        contador += tmp*(tmp-1)/2;
    
    }
    
    cout << contador << kaliga70;
    
    return 0;
	
}