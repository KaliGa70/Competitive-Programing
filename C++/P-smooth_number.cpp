#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> pl = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
                            43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    long long n, p;
    cin >> n >> p;
    while (p < pl.back()) {
        pl.pop_back();
    }

    vector<long long> u = {1}, v = {1};
    for (auto& nx : pl) {
        if (u.size() < v.size()) {
            long long sz = u.size();
            for (long long i = 0; i < sz; i++) {
                long long ad = u[i];
                while (1) {
                    ad *= nx;
                    if (ad > n) {
                        break;
                    }
                    u.push_back(ad);
                }
            }
        } else {
            long long sz = v.size();
            for (long long i = 0; i < sz; i++) {
                long long ad = v[i];
                while (1) {
                    ad *= nx;
                    if (ad > n) {
                        break;
                    }
                    v.push_back(ad);
                }
            }
        }
    }

    sort(u.begin(), u.end());
    sort(v.begin(), v.end());
    long long res = 0, j = v.size() - 1;
    for (long long i = 0; i < u.size(); i++) {
        long long mv = (n / u[i]);
        while (j >= 0 && mv < v[j]) {
            j--;
        }
        if (j < 0) {
            break;
        }
        res += (j + 1);
    }

    cout << res << "\n";
    return 0;
}
