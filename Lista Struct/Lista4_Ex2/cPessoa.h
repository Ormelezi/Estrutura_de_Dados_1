
#ifndef CPESSOA_H
#define CPESSOA_H

#include <string>

using namespace std;

struct pessoa{
    string nome;
    long int cpf;
    char sexo;
    float  altura;
    float peso;   
};

class cPessoa {
public:
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    void lerDados();
    void bolha(pessoa vetor[], int qtde);
    void pesquisaSequencial(pessoa vetor[],int qtde, int cpf);
    float calcIMC(pessoa x);
    int PesquisaBinaria(pessoa vetor[], int qtde, int cpf);
    void imprimirVetor(pessoa vetor[], int qtde);
    
private:

};

#endif /* CPESSOA_H */

