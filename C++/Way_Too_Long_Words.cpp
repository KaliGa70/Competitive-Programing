#include <iostream>

using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int k;
    string word;
    
    cin >> k;
    
    for(int i = 0; i < k; ++i){
        
        cin>>word;
        
        if(word.size() > 10) {
            
            cout<< word[0] << word.size() - 2 << word[word.size() - 1] << "\n";
            
        } else {
            
            cout<< word << "\n";
            
        }
        
    }
    
}