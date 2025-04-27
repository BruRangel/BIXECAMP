#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int mat[N][4];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        int p_ini_pernalonga = mat[i][0];
        int p_ini_patolino = mat[i][1];

        string vencedor_ini;
        if (p_ini_pernalonga > p_ini_patolino)
            vencedor_ini = "Pernalonga";
        else if (p_ini_patolino > p_ini_pernalonga)
            vencedor_ini = "Patolino";
        else
            vencedor_ini = "N";

        int p_ini_max = max(mat[i][0], mat[i][1]);
        int p_ini_min = min(mat[i][0], mat[i][1]);
        int p_fim_max = max(mat[i][2], mat[i][3]);
        int p_fim_min = min(mat[i][2], mat[i][3]);

        if ((mat[i][0] >= 11 || mat[i][1] >= 11) && (abs(mat[i][0] - mat[i][1]) > 2))
            cout << "Falha" << endl;

        else if ((mat[i][2] >= 11 || mat[i][3] >= 11) && (abs(mat[i][2] - mat[i][3]) > 2))
            cout << "Falha" << endl;

        else if ((p_fim_max < p_ini_max) || (p_fim_min < p_ini_min))
            cout << "Falha" << endl;
        
        else if ((mat[i][0] >= 11 || mat[i][1] >= 11) && (abs(mat[i][0] - mat[i][1]) <= 2))
            cout << vencedor_ini << endl;

        else if (vencedor_ini == "N" || mat[i][2] == mat[i][3])
            cout << "Nenhum" << endl;

        else if (p_fim_min < p_ini_max || p_fim_min == p_ini_min)
            cout << vencedor_ini << endl;

        else
            cout << "Nenhum" << endl;
    }
}
