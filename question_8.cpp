#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(vector<bool> &estados, vector<vector<int>> &grafo, int atual){
    if(estados[atual]){
        return;
    }

    estados[atual] = true;
    for(int c = 0; c < grafo[atual].size(); c++){
        dfs(estados, grafo, grafo[atual][c]);
    }
}

int main() {
    
    int pessoas, linhas;
    cin >> pessoas >> linhas;
    vector<vector<int>> familias(pessoas+1,vector<int>(0));
    vector<bool> corno(pessoas+1);

    for(int i = 0; i < linhas; i++) {
        int j,k;

        cin >> j >> k;

        familias[j].push_back(k);
        familias[k].push_back(j);
    }

    for(int i = 1; i < corno.size(); i++) {
        corno[i] = false;
    }

    int count = 0;

    for(int i = 1; i < corno.size(); i++) {
        if(corno[i] == false)  {
        dfs(corno, familias, i);
        count++;
        }
    }

    cout << count << endl;

    return 0;
}