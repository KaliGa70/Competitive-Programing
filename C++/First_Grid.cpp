#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string x, y;
    cin >> x >> y;
    bool contador = true;


    if(((x) == ".#" && (y) == "#.") || ((x) == "#." && (y) == ".#")) {contador = false;}


    if(contador == true){

        cout << "Yes";

    } else {

        cout << "No";

    }

    

    return 0;

}