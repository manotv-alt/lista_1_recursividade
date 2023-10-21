#include <bits/stdc++.h>
using namespace std;

void hanoi(int num_discos, char O, char D, char A) {

    if(num_discos == 1) {
        printf("(%c,%c)\n", O, D);
        return;
    }

    hanoi(num_discos -1, O, A, D);
    printf("(%c,%c)\n", O, D);

    hanoi(num_discos-1, A, D, O);
}

int main () {

    int num_discos;
    cin >> num_discos;

    hanoi(num_discos, 'O', 'D', 'A');

    return 0;
}

