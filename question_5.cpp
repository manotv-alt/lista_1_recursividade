#include <bits/stdc++.h>
using namespace std;

void bin(int num) {
    if(num/2 != 0) {
    bin(num/2);
    }
    cout << num%2;
}

int main () {
    int num, a;
    cin >> num;

    for(int i = 0; i < num; i++) {
        cin >> a;
        bin(a);
        cout << endl;
    }

    return 0;
}

