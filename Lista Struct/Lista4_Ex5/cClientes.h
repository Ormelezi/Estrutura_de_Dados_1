#ifndef CCLIENTES_H
#define CCLIENTES_H
#include <string>

using namespace std;

struct cliente{
    string nome;
    long int cpf;
    float saldo;
};

class cClientes {
public:
    
    cliente vetor[3];
    int opc;
    
    cClientes();
    cClientes(const cClientes& orig);
    virtual ~cClientes();
    
    void cadastro();
    void conta();
    
private:

};

#endif /* CCLIENTES_H */

