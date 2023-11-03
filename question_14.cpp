#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void _xor(vector<int> &vet, vector<int> &end, int value, int k, int indice_atual) {
    if (k == 1) {
        for (int i = indice_atual; i < vet.size(); i++) {
            end.push_back(value ^ vet[i]);
        }
    }
    else {
        for (int i = indice_atual; i < vet.size(); i++) {
            _xor(vet, end, value ^ vet[i], k - 1, indice_atual + 1);
        }
    }
}

int main () {
    
    int casos;
    cin >> casos;
    
    while (casos) {

        int tamanho;
        cin >> tamanho;
        int amostra, resposta = 0;
        cin >> amostra;
        vector<int> vet(tamanho-1);
        vector<int> final;

        for(int i = 0; i < tamanho; i++) {
            cin >> vet[i];
        }

        _xor(vet, final, 0, amostra, 0);

        for(int i = 0; i < final.size(); i++) {
            if(final[i] > resposta) resposta = final[i];
        }

        cout << resposta << endl;
        casos--;
    }

    return 0;
}
