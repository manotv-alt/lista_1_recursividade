#include <bits/stdc++.h>
using namespace std;

int fack(int m, int n) {
    if(m == 0) {
        return n+1;
    }
    if(n == 0 and m > 0) {
        return fack(m - 1, 1);
    }
    if(n > 0 and m > 0) {
        return fack(m-1, fack(m, n-1));
    }
    return 0;
}

int main () {

    int m, n;
    cin >> m >> n;

    cout << fack(m,n) << endl;

    return 0;
}

