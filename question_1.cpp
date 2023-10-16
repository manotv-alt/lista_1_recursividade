#include <bits/stdc++.h>
using namespace std;

void  naturals(int num) {
    if(num > 0) {
        naturals(num-1);
        if(num  != 1)
        cout << ' ' << num;
        else { 
            cout << num;
        }
    }

}

int main () {
    int num;
    cin >> num;

    naturals(num);
    cout << endl;

    return 0;
}

