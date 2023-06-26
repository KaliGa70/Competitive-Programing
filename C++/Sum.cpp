#include <iostream>

using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a, b, c, k;
    
    cin >> k;
    
    for(int i = 0; i < k; ++i){
        
        cin >> a;
        cin >> b;
        cin >> c;
        
        if(a == (b + c)){
            cout<<"YES"<<endl;
        } else if(b == (a + c)){
            cout<<"YES"<<endl;
        } else if(c == (b + a)){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        
    }
    
    
}