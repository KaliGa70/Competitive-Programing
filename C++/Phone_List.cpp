/** @author KaliGa70 -> 
 * 
 - Github: https://github.com/KaliGa70 
 * 
**/

#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

struct Node{
	
	map<char, int> next;
	bool fin = false;
	
};

vector <Node> trie;

int newNode(){
	
	int size = (int)(trie.size());
	trie.push_back(Node());
	
	return size;
	
}

void finalInsert(string s){
	
	int current = 0;
	
	for(char c : s){
		
		if(!trie[current].next.count(c)) {
			
			int tmp = newNode();
			trie[current].next[c] = tmp;
						
		}
		
		current = trie[current].next[c];
		
	}
	
	trie[current].fin = true;
	
}

bool check(string s) {
	
	int current = 0;
	
	for(char c : s) {
		
		if(trie[current].fin) return true;
		current = trie[current].next[c];
		
	}
	
	return false;	

}

int main(){_

    int time, number; cin >> time;
    
    while(time--) {
    	
    	cin >> number;
    	
    	trie.clear();
    	trie.push_back(Node());
    	
    	vector<string> numbers(number);
    	
    	for(int i = 0; i < number; i++) {
    		
    		cin >> numbers[i];
    		finalInsert(numbers[i]);
    		
		}
		
		bool flag = true;
		
		for(string number: numbers) {

			if(check(number)) {
				
				flag = false;
				
			}			
			
		}
		
		cout << (flag ? "YES\n" : "NO\n");
    	
	}

}