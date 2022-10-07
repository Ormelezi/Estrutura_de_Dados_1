#include "cCandidatos.h"
#include <iostream>

using namespace std;

cCandidatos::cCandidatos() {
}

cCandidatos::cCandidatos(const cCandidatos& orig) {
}

cCandidatos::~cCandidatos() {
}

void cCandidatos::lerDados() {
    bool aux = true;
    int voto, total = 0;
    candidatos vetor[7];


    cout << "\n---------------------------------------"
            "\n 1-Lula"
            "\n 2-Bolsonaro"
            "\n 3-Ciro Gomes"
            "\n 4-Soraya"
            "\n 5-Nulo"
            "\n 6-Branco"
            "\n 0-SAIR"
            "\n---------------------------------------";

    for (int i = 0; i < 8; i++) {
        vetor[i].votos = 0;
    }

    while (aux) {

        cout << "\nInforme o opção de voto: ";
        cin >> voto;
        total++;

        if (voto == 0) {
            aux = false;
        } else {
            vetor[voto].votos += 1;
        }
    }



    total = total - 1;
    cout << "Houve um total de " << total << " votos."
            "\nLula teve uma porcentagem de " << (vetor[1].votos * 100) / total << "% de votos."
            "\nBolsonaro teve uma porcentagem de " << (vetor[2].votos * 100) / total << "% de votos."
            "\nCiro Gomes teve uma porcentagem de " << (vetor[3].votos * 100) / total << "% de votos."
            "\nSoraya teve uma porcentagem de " << (vetor[4].votos * 100) / total << "% de votos."
            "\nBrancos teve uma porcentagem de " << (vetor[6].votos * 100) / total << "% de votos."
            "\nNulos teve uma porcentagem de " << (vetor[5].votos * 100) / total << "% de votos.";

}