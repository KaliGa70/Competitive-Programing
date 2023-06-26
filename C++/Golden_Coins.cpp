#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, happy = 0;

    cin >> x;

    while(x >= 500){

        happy += 1000;

        x -= 500;

    }

    if(x < 500) {

        while(x >= 5){

            happy += 5;
            x -= 5;

        }

    }

    cout << happy;

    return 0;

}