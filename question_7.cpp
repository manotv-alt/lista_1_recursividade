#include <iostream>
#include <vector>

using namespace std;

vector<vector<long int>> s;

vector<int> cedulas(7);
vector<int> notas = {0, 2, 5, 10, 20, 50, 100};

long int sol(int valor, int indice) {
    if (valor == 0) {
        return 1;
    }
    if (indice == 0) {
        return 0;
    }

    if (s[valor][indice] != -1) {
        return s[valor][indice];
    }

    long int solucao = 0;

    for (int c = 0; c <= cedulas[indice]; c++) {
        int proximo = valor - c * notas[indice];

        if (proximo < 0) {
            break;
        }

        solucao += sol(proximo, indice - 1);
    }

    s[valor][indice] = solucao;

    return solucao;
}

int main() {
    int valor;

    cin >> valor;

    s = vector<vector<long>>(valor + 1, vector<long>(7, -1));

    for (int i = 1; i < 7; i++) {
        cin >> cedulas[i];
    }

    cout << sol(valor, 6) << endl;

    return 0;
}