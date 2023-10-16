#include <bits/stdc++.h>
using namespace std;

int fibo(int num) {
    
    if(num == 0) {
        return 0;
    }
    if(num == 1) {
        return 1;
    }
    else{
        return fibo(num-1) + fibo(num-2);
    }
}

void print_fibo (int init, int end) {
    cout << fibo(init);
    cout << ' ';
    if(init == end) return;
    print_fibo(++init, end);
}

int main () {
    int num;
    cin >> num;

    print_fibo(0,num);
    cout << endl;

    return 0;
}