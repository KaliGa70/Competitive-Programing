#include <iostream>

using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long int contador = 0;
    
    long long int w;
    
    
    
    cin >> w;
    
    string word = to_string(w);
    
    for(int i = 0; i < word.length(); ++i) {
        
        if(word[i] == '4' || word[i] == '7') {
            
            contador++;
            
        }
        
    }
    
    if((contador) == 7 || (contador) == 4) {
        
        cout << "YES";
        
    } else {
        
        cout << "NO";
        
    }
    
}