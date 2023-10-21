#include <iostream>
using namespace std;

int ax = 0;

int testes(int num_teste) {

    if(num_teste <= 2) {
        ax = num_teste;
        return 0;
    }
    if(num_teste%2 == 0) {
        testes((num_teste/2)+1);
        ax += 2;
        return 0;
    }
    if(num_teste%2 != 0) {
        testes(num_teste/2);
        ax++;
        return 0;
    }
}

int main () {

    int ar, baloes;

    cin >> ar >> baloes;

    testes(ar);

    cout << ax << endl;

    return 0;
}

