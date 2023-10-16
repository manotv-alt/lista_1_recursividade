#include <bits/stdc++.h>
using namespace std;

long int fat(int num) {
    if(num == 1) {
        return 1;
    }
    else if (num%2 != 0) {
        return num*fat(num-2);
    }
    else if (num%2 == 0) {
        return fat(num-1);
    }
}

int main () {
    int num;
    cin >> num;

    cout << fat(num);
    cout << endl;

    return 0;
}