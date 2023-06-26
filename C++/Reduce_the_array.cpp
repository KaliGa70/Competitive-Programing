#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long test;
    
    cin>>test;
    
    while(test--){
        
        long long n;
        
        cin>> n;
        
        vector <int> v(n);
        
        priority_queue <int> pq;
        
        for(long long i = 0; i < n; i++){
            
            cin>>v[i];
            pq.push(v[i] * -1);
            
        }
    
        long long cost = 0;
        
        while(pq.size() > 1){
            
            long long sum = pq.top();
            
            pq.pop();
            
            sum += pq.top();
            
            pq.pop();
            
            pq.push(sum);
            
            cost += (sum * -1);
    
        }
        
    cout<< cost << "\n";
    
    }

}
