#ifndef CALUNOS_H
#define CALUNOS_H

#include <string>

using namespace std;

struct aluno{
    string nome;
    long int matricula;
    float n1, n2;;
};

class cAlunos {
public:
    cAlunos();
    cAlunos(const cAlunos& orig);
    virtual ~cAlunos();

    void lerDados();
    void imprimirVetor(aluno vetor[], int qnt); 
private:

};

#endif /* CALUNOS_H */

