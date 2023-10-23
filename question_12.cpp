#include <iostream>
#include <vector>

using namespace std;

typedef struct {
    int x;
    int y;
} coordenadas;

void lab (vector<vector<coordenadas>> &labirinto, vector<vector<bool>> &visitados, int linha, int coluna, int *resultado) {
    
    if(visitados[linha][coluna] == true) {
        *resultado = 2;
        return;
    }
    if(linha == 0 and coluna == 0) {
        *resultado = 1;
        return;
    }

    visitados[linha][coluna] = true;
    int ax = linha;
    linha = labirinto[ax][coluna].y;
    coluna = labirinto[ax][coluna].x;
    
        
    lab(labirinto, visitados, linha, coluna, resultado);
}

int main () {

    int linhas, colunas, resultado = 0;
    int x_inicial, y_inicial;

    cin >> linhas >> colunas;
    vector<vector<bool>> visitados(linhas, vector<bool>(colunas));
    vector<vector<coordenadas>> labirinto(linhas, vector<coordenadas>(colunas));

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {

            cin >> labirinto[i][j].y >> labirinto[i][j].x;
        }
    }


    cin >> y_inicial >> x_inicial;

    lab(labirinto, visitados, y_inicial, x_inicial, &resultado);

    if(resultado == 1) cout << "VENCE" << endl;
    else {
        cout << "PRESO" << endl;
    }

    return 0;
}