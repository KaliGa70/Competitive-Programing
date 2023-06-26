/** @author KaliGa70 -> 
 * 
 - Github: https://github.com/KaliGa70 
 * 
**/

#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main(){_

	int A, B, suma, resta, multiplicacion;
	
	cin >> A >> B;
	
	suma = A + B;
	resta = A - B;
	multiplicacion = A * B;
	
	if(suma >= resta && suma >= multiplicacion) cout << suma;
	else if(resta >= suma && resta >=multiplicacion) cout << resta;
	else cout << multiplicacion;

}